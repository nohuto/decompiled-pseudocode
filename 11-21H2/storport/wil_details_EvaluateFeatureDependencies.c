/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C0084148
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1C00842F0 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C0097078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0023AC0 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00841F4 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

PDEVICE_OBJECT *wil_details_EvaluateFeatureDependencies()
{
  PDEVICE_OBJECT *v0; // rdx
  int v1; // r9d
  int v2; // r8d
  BOOL v3; // eax
  PDEVICE_OBJECT *i; // rcx
  PDEVICE_OBJECT *result; // rax
  PDEVICE_OBJECT *v6; // rbx

  v0 = wil_details_FeatureDescriptors_SkipPadding((PDEVICE_OBJECT *)&wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD *)&(*v0)->Type;
      if ( (v2 & 0x80u) != 0 )
      {
        if ( (v2 & 0x60) != 0 )
          v3 = (*(_DWORD *)&(*v0)->Type & 0x60) == 64;
        else
          v3 = *((_BYTE *)v0 + 23) != 0;
        _InterlockedXor(
          (volatile signed __int32 *)&(*v0)->Type,
          v1 & 0xFFFFFFEF | (16 * v3) ^ *(_DWORD *)&(*v0)->Type & 0x10);
      }
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 6);
    }
    while ( v0 );
  }
  for ( i = (PDEVICE_OBJECT *)&wil_details_featureDescriptors_a; ; i = v6 + 6 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
