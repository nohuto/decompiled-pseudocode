/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1405E4020
 * Callers:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 * Callees:
 *     sub_14053FE50 @ 0x14053FE50 (sub_14053FE50.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  return sub_14053FE50((__int64)FeatureUsageReport, (__int64)FeatureUsageReport);
}
