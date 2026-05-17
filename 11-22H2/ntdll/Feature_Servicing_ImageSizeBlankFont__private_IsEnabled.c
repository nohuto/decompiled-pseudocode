/*
 * XREFs of Feature_Servicing_ImageSizeBlankFont__private_IsEnabled @ 0x18009E374
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7BB4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1800D7D44 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_ImageSizeBlankFont__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_ImageSizeBlankFont__private_featureState,
                                &Feature_Servicing_ImageSizeBlankFont__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_Servicing_ImageSizeBlankFont__private_reporting,
    39436192,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_CritsecInit_logged_traits,
    v1);
  return v1;
}
