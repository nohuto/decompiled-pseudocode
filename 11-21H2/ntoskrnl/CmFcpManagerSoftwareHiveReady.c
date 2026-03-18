/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x140832DF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140832E84 (CmFcpManagerDrainUsageNotifications.c)
 */

char __fastcall CmFcpManagerSoftwareHiveReady(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rsi

  *(_BYTE *)(a1 + 336) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 328);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
