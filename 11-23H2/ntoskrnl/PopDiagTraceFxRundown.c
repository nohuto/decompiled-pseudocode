/*
 * XREFs of PopDiagTraceFxRundown @ 0x1405888D8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x1408629E0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     PopFxTraceDeviceRegistration @ 0x140837188 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x14084F980 (PopDiagTraceFxPluginRegistration.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x14098E3E8 (PopDiagTraceDeviceVerboseRundown.c)
 */

_QWORD *__fastcall PopDiagTraceFxRundown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  ULONG_PTR *i; // rbx
  __int64 v5; // rdx
  ULONG_PTR *j; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      LOBYTE(v3) = 1;
      PopDiagTraceFxPluginRegistration(i, i[3], v3);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      if ( !a1 )
      {
        LOBYTE(v5) = 1;
        PopFxTraceDeviceRegistration(j, v5);
      }
      PopDiagTraceDeviceVerboseRundown(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
