/*
 * XREFs of PopSystemIdleWorker @ 0x1407A6F90
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopScanIdleList @ 0x14032CBA0 (PopScanIdleList.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopExecuteSystemIdleAction @ 0x1407A7100 (PopExecuteSystemIdleAction.c)
 *     PopUpdateLastUserInputTime @ 0x1407A7520 (PopUpdateLastUserInputTime.c)
 *     PopIsSystemIdle @ 0x1407A7578 (PopIsSystemIdle.c)
 *     PopPulseSystemIdleEvent @ 0x1407A872C (PopPulseSystemIdleEvent.c)
 */

__int64 PopSystemIdleWorker()
{
  bool v0; // si
  int v2; // ecx
  int v3; // ebx
  char IsSystemIdle; // di
  __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  v0 = PopIdleLoopExecuted.Header.SignalState == 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v2, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v2));
    if ( v2 == 2 )
      PopPulseSystemIdleEvent(2LL);
  }
  PopUpdateLastUserInputTime();
  v3 = dword_140C09804;
  IsSystemIdle = PopIsSystemIdle(&unk_140C09818, (unsigned int)dword_140C09804, &v7, &unk_140C09918);
  dword_140C098F8 = PopSystemIdleContext;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( PsWin32CalloutsEstablished )
    PopScanIdleList(v3, v7 / (unsigned int)PopIdleScanInterval);
  LOBYTE(v5) = IsSystemIdle;
  PopExecuteSystemIdleAction((unsigned int)dword_140C098F8, v5, &unk_140C09900);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C098F8 = 0;
  PopReleaseRwLock(&PopSystemIdleLock);
  if ( v0 )
    KeSetEvent(&PopIdleLoopExecuted, 0, 0);
  return 0LL;
}
