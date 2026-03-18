/*
 * XREFs of PpmConvertTime @ 0x140255510
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1402520E0 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x140255404 (PpmUpdateTimeAccumulation.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255A70 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     PpmParkApplyPolicy @ 0x140392600 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x14039FB94 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeTo @ 0x1403A7204 (PpmConvertTimeTo.c)
 *     PpmConvertTimeFrom @ 0x1403A9558 (PpmConvertTimeFrom.c)
 *     PoNotifySystemTimeSet @ 0x1403B64C8 (PoNotifySystemTimeSet.c)
 *     PopCalculateIdleInformation @ 0x1403C7D40 (PopCalculateIdleInformation.c)
 *     PpmGetThroughputInfoCallback @ 0x1404631A0 (PpmGetThroughputInfoCallback.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140584D88 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140585E10 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140586050 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x140591334 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140592254 (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslateIdleAccounting @ 0x140597F50 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140598188 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PopCalculateWakeTimeAdjustment @ 0x140987168 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x14098F828 (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA789C (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AAA664 (PopSstDiagInitializeResumeTimer.c)
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
