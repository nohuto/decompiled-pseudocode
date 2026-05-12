/*
 * XREFs of Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled @ 0x1C00231FC
 * Callers:
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C004D018 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0023584 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0023708 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_DeferredFirmwareActivation__private_featureState,
                                &wil_details_featureDescriptors_a);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_Servicing_DeferredFirmwareActivation__private_reporting,
    49773112,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_DeferredFirmwareActivation_logged_traits,
    v1);
  return v1;
}
