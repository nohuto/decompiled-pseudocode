/*
 * XREFs of PopSystemIdleWorker @ 0x140752F30
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopPulseSystemIdleEvent @ 0x1406E8E9C (PopPulseSystemIdleEvent.c)
 *     PopUpdateLastUserInputTime @ 0x140752B6C (PopUpdateLastUserInputTime.c)
 *     PopIsSystemIdle @ 0x140752BB4 (PopIsSystemIdle.c)
 *     PopExecuteSystemIdleAction @ 0x140752DA8 (PopExecuteSystemIdleAction.c)
 */

__int64 PopSystemIdleWorker()
{
  bool v0; // si
  int v2; // ecx
  int v3; // ebx
  unsigned __int8 IsSystemIdle; // di
  int v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v6);
  v0 = PopIdleLoopExecuted.Header.SignalState == 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v2, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v2));
    if ( v2 == 2 )
      PopPulseSystemIdleEvent(2u);
  }
  PopUpdateLastUserInputTime();
  v3 = dword_140C095F4;
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140C09608, dword_140C095F4, &v7, (__int64)&unk_140C09708);
  dword_140C096E8 = PopSystemIdleContext;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v3, v7 / (unsigned int)PopIdleScanInterval);
  PopExecuteSystemIdleAction(dword_140C096E8, IsSystemIdle, (__int64)&unk_140C096F0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C096E8 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
