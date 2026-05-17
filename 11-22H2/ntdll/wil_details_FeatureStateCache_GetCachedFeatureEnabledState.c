/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1800D7D44
 * Callers:
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     Feature_Servicing_ImageSizeBlankFont__private_IsEnabled @ 0x18009E374 (Feature_Servicing_ImageSizeBlankFont__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1800D7E78 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(_DWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp+8h]

  LODWORD(v3) = *a1;
  if ( (*a1 & 1) != 0 )
    return v3;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, v3, a2);
}
