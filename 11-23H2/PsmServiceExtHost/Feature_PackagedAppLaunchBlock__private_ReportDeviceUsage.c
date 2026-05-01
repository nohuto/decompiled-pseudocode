/*
 * XREFs of Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage @ 0x180051528
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003369C (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18002A530 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18004BAEC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_PackagedAppLaunchBlock__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_PackagedAppLaunchBlock__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PackagedAppLaunchBlock__private_descriptor,
      v0,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_PackagedAppLaunchBlock__private_descriptor);
  }
}
