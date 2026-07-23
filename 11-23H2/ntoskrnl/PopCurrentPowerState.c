/*
 * XREFs of PopCurrentPowerState @ 0x1407A6F38
 * Callers:
 *     PopUpdateAcDcState @ 0x1403C4528 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1403C6434 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x140591824 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1408593B4 (PopTransitionTelemetryOsState.c)
 *     PopEsStartTelemetry @ 0x140863BF4 (PopEsStartTelemetry.c)
 *     PopBootBatteryStatusWorker @ 0x140864940 (PopBootBatteryStatusWorker.c)
 *     PopCurrentPowerStatePrecise @ 0x140873A08 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1409984F8 (PopEsEnterSleepShutdown.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3D218, 0LL);
  *a1 = xmmword_140C3D228;
  a1[1] = xmmword_140C3D238;
  PopReleaseRwLock((__int64 *)&xmmword_140C3D218);
}
