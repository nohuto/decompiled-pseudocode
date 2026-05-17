/*
 * XREFs of Feature_TreatDosDevicePathsAsNormalFiles__private_ReportDeviceUsage @ 0x18009E7C8
 * Callers:
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D7050 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18009E828 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D756C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 Feature_TreatDosDevicePathsAsNormalFiles__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  if ( (Feature_TreatDosDevicePathsAsNormalFiles__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_TreatDosDevicePathsAsNormalFiles__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_TreatDosDevicePathsAsNormalFiles__private_descriptor,
      v1,
      3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_TreatDosDevicePathsAsNormalFiles__private_descriptor);
  }
  return result;
}
