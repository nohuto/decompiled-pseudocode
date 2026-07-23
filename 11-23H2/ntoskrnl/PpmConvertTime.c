/*
 * XREFs of PpmConvertTime @ 0x1402555D0
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1402521A0 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x1402554C4 (PpmUpdateTimeAccumulation.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255B30 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     PpmParkApplyPolicy @ 0x1403927E0 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x14039FD74 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeTo @ 0x1403A73E4 (PpmConvertTimeTo.c)
 *     PpmConvertTimeFrom @ 0x1403A9738 (PpmConvertTimeFrom.c)
 *     PoNotifySystemTimeSet @ 0x1403B66A8 (PoNotifySystemTimeSet.c)
 *     PopCalculateIdleInformation @ 0x1403C7F20 (PopCalculateIdleInformation.c)
 *     PpmGetThroughputInfoCallback @ 0x1404635A0 (PpmGetThroughputInfoCallback.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140585278 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140586300 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140586540 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x140591824 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140592744 (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslateIdleAccounting @ 0x140598440 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140598678 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PopCalculateWakeTimeAdjustment @ 0x140987368 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x14098FA28 (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA770C (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AAA4D4 (PopSstDiagInitializeResumeTimer.c)
 *     PpmInitIdlePolicy @ 0x140B670B8 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140B6CD6C (PopInitDripsWakeAccounting.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( is_mul_ok(a1, a3) )
    return a1 * (unsigned __int128)a3 / a2;
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
