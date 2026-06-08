/*
 * XREFs of Feature_HwpAllowFastMsrOptimizations__private_ReportDeviceUsage @ 0x1C0003928
 * Callers:
 *     IsHwpFastMsrSupported @ 0x1C002E450 (IsHwpFastMsrSupported.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0003A5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00080FC (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 Feature_HwpAllowFastMsrOptimizations__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_HwpAllowFastMsrOptimizations__private_featureState;
  if ( (Feature_HwpAllowFastMsrOptimizations__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_HwpAllowFastMsrOptimizations__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&wil_details_featureDescriptors_a, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &wil_details_featureDescriptors_a);
  }
  return result;
}
