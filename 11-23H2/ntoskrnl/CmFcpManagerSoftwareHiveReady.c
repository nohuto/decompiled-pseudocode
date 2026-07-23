/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x14080DE90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x14041A1AC (CmFcpSubscribeScmWnfStateChange.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x14080E2D8 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *__fastcall CmFcpManagerSoftwareHiveReady(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rbp

  *(_BYTE *)(a1 + 336) = 1;
  if ( *(_BYTE *)(a1 + 1736) )
    CmFcpSubscribeScmWnfStateChange(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1 + 328, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 328), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 328), v3, a1 + 328);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 328), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 328));
  KeAbPostRelease(a1 + 328);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
