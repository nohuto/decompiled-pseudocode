/*
 * XREFs of CmpDoFlushNextHive @ 0x1407174E0
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  __int64 NextActiveHive; // rbx
  unsigned __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 UnbiasedInterruptTime; // r11
  unsigned __int64 v14; // rcx

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
          v14 = *(_QWORD *)(NextActiveHive + 4136) + 10000000LL * (unsigned int)dword_140C01A50;
          if ( UnbiasedInterruptTime >= v14 )
          {
            if ( (int)CmpFlushHive(NextActiveHive, 0x12u) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v7 = 10000000LL * (unsigned int)dword_140C01A5C;
            }
          }
          else
          {
            v3 = 1;
            v7 = v14 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 4224) & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive, 0x22u);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2944) == 1 )
      {
        LOCK_HIVE_LOAD();
        CmpLockRegistryFreezeAware(0);
        if ( *(_BYTE *)(NextActiveHive + 2944) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry(v10, v9, v11, v12);
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
