/*
 * XREFs of Feature_HgsPlusSupportRequired__private_ReportDeviceUsage @ 0x140411698
 * Callers:
 *     PpmHeteroInitializeHgsSupport @ 0x1403AC5D4 (PpmHeteroInitializeHgsSupport.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FCB0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040FA58 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_HgsPlusSupportRequired__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_HgsPlusSupportRequired__private_featureState;
  if ( (Feature_HgsPlusSupportRequired__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_HgsPlusSupportRequired__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_HgsPlusSupportRequired__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_HgsPlusSupportRequired__private_descriptor);
  }
}
