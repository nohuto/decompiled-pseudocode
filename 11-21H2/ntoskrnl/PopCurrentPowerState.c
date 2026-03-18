/*
 * XREFs of PopCurrentPowerState @ 0x140750EC4
 * Callers:
 *     PopEsUpdateState @ 0x14024E2C8 (PopEsUpdateState.c)
 *     PopUpdateAcDcState @ 0x1403699FC (PopUpdateAcDcState.c)
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x1407ED930 (PopCurrentPowerStatePrecise.c)
 *     PopEsEnterSleepShutdown @ 0x1408071C4 (PopEsEnterSleepShutdown.c)
 *     PopTransitionTelemetryOsState @ 0x14081B500 (PopTransitionTelemetryOsState.c)
 *     PopEsStartTelemetry @ 0x14081CC60 (PopEsStartTelemetry.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C22B70, 0LL);
  *a1 = xmmword_140C22B80;
  a1[1] = xmmword_140C22B90;
  PopReleaseRwLock((ULONG_PTR)&xmmword_140C22B70);
}
