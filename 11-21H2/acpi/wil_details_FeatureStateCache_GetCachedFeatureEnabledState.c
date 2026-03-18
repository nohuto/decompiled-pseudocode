/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C002F7D4
 * Callers:
 *     Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled @ 0x1C002F2E4 (Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C002F900 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C002F808 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
