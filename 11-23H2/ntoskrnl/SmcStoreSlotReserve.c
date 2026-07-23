/*
 * XREFs of SmcStoreSlotReserve @ 0x1409DBD44
 * Callers:
 *     SmcStoreCreate @ 0x1409DB454 (SmcStoreCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     SSHSupportAllocateNonPaged @ 0x14032D5E4 (SSHSupportAllocateNonPaged.c)
 *     SmcStorePlacementGet @ 0x1409DB868 (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x1409DBC08 (SmcStoreSlotAbort.c)
 */

unsigned __int64 __fastcall SmcStoreSlotReserve(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rbp
  __int64 NonPaged; // rax
  struct _PRIVILEGE_SET *v8; // r14
  void *v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdi
  int v12; // eax

  v4 = ((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5;
  v6 = 0LL;
  NonPaged = SSHSupportAllocateNonPaged(4 * v4, 0x72436D73u);
  v8 = (struct _PRIVILEGE_SET *)NonPaged;
  if ( !NonPaged )
    return v6;
  v9 = (void *)NonPaged;
  if ( v4 )
  {
    if ( (NonPaged & 4) != 0 )
    {
      *(_DWORD *)NonPaged = -1;
      if ( !--v4 )
        goto LABEL_8;
      v9 = (void *)(NonPaged + 4);
    }
    memset(v9, 0xFFu, 8 * (v4 >> 1));
    if ( (v4 & 1) != 0 )
      *((_DWORD *)v9 + v4 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v11 = a1 + 168;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  while ( v11 < a1 + 552 )
  {
    if ( *(_DWORD *)v11 == -1 )
    {
      v12 = *(_DWORD *)(v11 + 4);
      if ( (v12 & 4) == 0 )
      {
        *(_QWORD *)(v11 + 8) = v8;
        *(_DWORD *)(v11 + 4) = v12 | 4;
        v8 = 0LL;
        if ( (int)SmcStorePlacementGet(a1, a3, v11) < 0 )
        {
          if ( v11 )
          {
            SmcStoreSlotAbort(a1, v11, 1);
            return v6;
          }
        }
        else
        {
          v6 = v11;
        }
        break;
      }
    }
    v11 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v8 )
    CmSiFreeMemory(v8);
  return v6;
}
