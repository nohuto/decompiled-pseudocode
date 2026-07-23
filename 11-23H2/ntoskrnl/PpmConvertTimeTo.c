/*
 * XREFs of PpmConvertTimeTo @ 0x1403A73E4
 * Callers:
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084EA60 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x14099A548 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099AA60 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x14099B298 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099CAE4 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
