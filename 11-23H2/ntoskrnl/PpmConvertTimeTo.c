/*
 * XREFs of PpmConvertTimeTo @ 0x1403A7204
 * Callers:
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084E760 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x14099A348 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099A860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x14099B098 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099C8E4 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     PpmConvertTime @ 0x140255510 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
