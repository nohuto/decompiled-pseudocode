/*
 * XREFs of PopCurrentPowerState @ 0x1407A6D48
 * Callers:
 *     PopUpdateAcDcState @ 0x1403C4348 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1403C6254 (PopEsUpdateState.c)
 *     PopCalculateCsSummary @ 0x140591334 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140859174 (PopTransitionTelemetryOsState.c)
 *     PopEsStartTelemetry @ 0x1408639B4 (PopEsStartTelemetry.c)
 *     PopBootBatteryStatusWorker @ 0x140864700 (PopBootBatteryStatusWorker.c)
 *     PopCurrentPowerStatePrecise @ 0x1408737C8 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1409982F8 (PopEsEnterSleepShutdown.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3D078, 0LL);
  *a1 = xmmword_140C3D088;
  a1[1] = xmmword_140C3D098;
  PopReleaseRwLock((__int64 *)&xmmword_140C3D078);
}
