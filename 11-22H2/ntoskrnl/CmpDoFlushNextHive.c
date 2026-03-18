/*
 * XREFs of CmpDoFlushNextHive @ 0x140752430
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140752244 (CmpDoQueueLateUnloadWorker.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752340 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1407523B8 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x140752570 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  __int64 NextActiveHive; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r11
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v7 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 160) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 104) || *(_BYTE *)(NextActiveHive + 195) )
        {
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v10 = *(_QWORD *)(NextActiveHive + 4136) + 10000000LL * (unsigned int)dword_140C01F40;
          if ( UnbiasedInterruptTime >= v10 )
          {
            if ( (int)CmpFlushHive(NextActiveHive) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v7 = 10000000LL * (unsigned int)dword_140C01F4C;
            }
          }
          else
          {
            v3 = 1;
            v7 = v10 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 4224) & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2944) == 1 )
      {
        LOCK_HIVE_LOAD();
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 2944) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry(v12, v11, v13, v14);
        UNLOCK_HIVE_LOAD();
      }
      if ( v7 >= v2 )
        v7 = v2;
      v2 = v7;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v7;
  }
  return v3;
}
