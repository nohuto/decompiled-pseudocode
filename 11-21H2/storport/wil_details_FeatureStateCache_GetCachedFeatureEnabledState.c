/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0023708
 * Callers:
 *     Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled @ 0x1C00231FC (Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0023834 (wil_details_GetCurrentFeatureEnabledState.c)
 *     Feature_1195765048__private_IsEnabled @ 0x1C00239F0 (Feature_1195765048__private_IsEnabled.c)
 *     Feature_Servicing_SMRCapacity__private_IsEnabled @ 0x1C0023A58 (Feature_Servicing_SMRCapacity__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C002373C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
