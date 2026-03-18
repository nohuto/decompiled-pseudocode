/*
 * XREFs of Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x14040F8CC
 * Callers:
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FBC0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040F218 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_SchedulerAggressiveForegroundBoost__private_featureState;
  if ( (Feature_SchedulerAggressiveForegroundBoost__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_SchedulerAggressiveForegroundBoost__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_SchedulerAggressiveForegroundBoost__private_descriptor,
      v0,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_SchedulerAggressiveForegroundBoost__private_descriptor);
  }
}
