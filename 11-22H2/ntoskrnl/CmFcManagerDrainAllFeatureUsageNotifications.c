/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A26E10
 * Callers:
 *     CmFcShutdownSystem @ 0x140A11CF8 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140810588 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&stru_140C14168, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14168, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140C14168, v1, (__int64)&stru_140C14168);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14168, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14168);
  KeAbPostRelease((ULONG_PTR)&stru_140C14168);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
