/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015AE44
 * Callers:
 *     ?Feature_1133322554__private_IsEnabled@@YAHXZ @ 0x1C015AD5C (-Feature_1133322554__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C015AF70 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?Feature_1938628922__private_IsEnabled@@YAHXZ @ 0x1C015C598 (-Feature_1938628922__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_4093980987__private_IsEnabled@@YAHXZ @ 0x1C015D41C (-Feature_4093980987__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_3190902075__private_IsEnabled@@YAHXZ @ 0x1C015D760 (-Feature_3190902075__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C015DADC (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_2990973245__private_IsEnabled@@YAHXZ @ 0x1C015DCF4 (-Feature_2990973245__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled@@YAHXZ @ 0x1C015DDC8 (-Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_2404731194__private_IsEnabled@@YAHXZ @ 0x1C015F6C8 (-Feature_2404731194__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabled@@YAHXZ @ 0x1C015FEAC (-Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_2923253048__private_IsEnabled@@YAHXZ @ 0x1C015FFCC (-Feature_2923253048__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015AE78 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
