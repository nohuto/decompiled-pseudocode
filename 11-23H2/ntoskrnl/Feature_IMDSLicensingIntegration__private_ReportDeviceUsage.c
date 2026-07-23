/*
 * XREFs of Feature_IMDSLicensingIntegration__private_ReportDeviceUsage @ 0x14041A5D4
 * Callers:
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FCB0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040FA58 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_IMDSLicensingIntegration__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_IMDSLicensingIntegration__private_featureState;
  if ( (Feature_IMDSLicensingIntegration__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_IMDSLicensingIntegration__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_IMDSLicensingIntegration__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_IMDSLicensingIntegration__private_descriptor);
  }
}
