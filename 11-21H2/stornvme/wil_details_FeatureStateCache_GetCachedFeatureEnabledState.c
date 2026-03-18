/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0010164
 * Callers:
 *     Feature_Servicing_ProtocolCommandTransferLength__private_IsEnabled @ 0x1C000FBD0 (Feature_Servicing_ProtocolCommandTransferLength__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0010290 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0010198 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
