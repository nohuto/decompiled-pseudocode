/*
 * XREFs of PpmConvertTimeTo @ 0x1403A6A74
 * Callers:
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084F5E0 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x14099A3F8 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099A910 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x14099B148 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099C994 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     PpmConvertTime @ 0x1402553F0 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
