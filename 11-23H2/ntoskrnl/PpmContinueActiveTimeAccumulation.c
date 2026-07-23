/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14034F2FC
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1402521A0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14034F1AC (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x140393258 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x1402554C4 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6FD0 (PpmUpdatePerformanceFeedback.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  PpmUpdateTimeAccumulation(a1, a2, 1);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
