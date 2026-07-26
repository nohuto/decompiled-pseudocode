/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0034774
 * Callers:
 *     ?Feature_3583068475__private_IsEnabled@@YAHXZ @ 0x1C003470C (-Feature_3583068475__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00348A0 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00347A8 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

union wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
        union wil_details_FeatureStateCache *a1,
        const struct wil_details_FeatureDescriptor *a2)
{
  if ( (a1->exchange & 1) == 0 )
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
             a1,
             (union wil_details_FeatureStateCache)a1->exchange,
             a2);
  return (union wil_details_FeatureStateCache)a1->exchange;
}
