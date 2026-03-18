/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14034F15C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1402520E0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14034F00C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x140393078 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x140255404 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6D40 (PpmUpdatePerformanceFeedback.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  PpmUpdateTimeAccumulation(a1, a2, 1);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
