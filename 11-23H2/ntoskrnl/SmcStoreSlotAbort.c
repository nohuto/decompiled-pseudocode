/*
 * XREFs of SmcStoreSlotAbort @ 0x1409DBA08
 * Callers:
 *     SmcStoreCreate @ 0x1409DB254 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x1409DBB44 (SmcStoreSlotReserve.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _PRIVILEGE_SET *v6; // rbp

  v3 = (volatile signed __int64 *)(a1 + 160);
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v6 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  CmSiFreeMemory(v6);
}
