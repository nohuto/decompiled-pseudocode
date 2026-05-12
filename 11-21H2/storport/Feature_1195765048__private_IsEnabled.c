/*
 * XREFs of Feature_1195765048__private_IsEnabled @ 0x1C00239F0
 * Callers:
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C008F47C (RaUnitStorageGetIdlePowerUpReason.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0023584 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0023708 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_1195765048__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_1195765048__private_featureState,
                                (__int64)&Feature_1195765048__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_1195765048__private_reporting,
    0x3278F4Fu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_DeferredFirmwareActivation_logged_traits,
    v1,
    v3);
  return v1;
}
