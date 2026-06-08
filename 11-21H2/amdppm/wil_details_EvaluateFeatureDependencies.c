/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C0022CA4
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1C0022E40 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C003C328 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C00046FC (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022D50 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

_QWORD *wil_details_EvaluateFeatureDependencies()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r8d
  BOOL v3; // eax
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rbx

  v0 = (int **)wil_details_FeatureDescriptors_SkipPadding(wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      v2 = **v0;
      if ( (v2 & 0x80u) != 0 )
      {
        if ( (v2 & 0x60) != 0 )
          v3 = (**v0 & 0x60) == 64;
        else
          v3 = *((_BYTE *)v0 + 23) != 0;
        _InterlockedXor(*v0, v1 & 0xFFFFFFEF | (16 * v3) ^ **v0 & 0x10);
      }
      v0 = (int **)wil_details_FeatureDescriptors_SkipPadding(v0 + 6);
    }
    while ( v0 );
  }
  for ( i = wil_details_featureDescriptors_a; ; i = v6 + 6 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
