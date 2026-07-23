/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1405AA610
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x140617684 (CmFcManagerNotifyFeatureUsage.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  return CmFcManagerNotifyFeatureUsage(FeatureUsageReport, FeatureUsageReport);
}
