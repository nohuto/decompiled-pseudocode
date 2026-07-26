/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0121274
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0121240 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0121240 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 */

union wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        union wil_details_FeatureStateCache *a1,
        union wil_details_FeatureStateCache a2,
        const struct wil_details_FeatureDescriptor *a3)
{
  unsigned int exchange; // ebx
  unsigned int v5; // esi
  const wil_details_FeatureDescriptor *const *requiresFeatures; // r14
  const struct wil_details_FeatureDescriptor *v7; // rax
  unsigned int v8; // ecx
  __int64 v10; // [rsp+40h] [rbp+8h]

  exchange = a2.exchange;
  HIDWORD(v10) = 0;
  v5 = (a2.exchange >> 4) & 1;
  if ( v5 )
  {
    requiresFeatures = a3->requiresFeatures;
    if ( requiresFeatures )
    {
      while ( 1 )
      {
        v7 = *requiresFeatures;
        if ( !*requiresFeatures )
          goto LABEL_13;
        if ( v7->isAlwaysEnabled || v7->isAlwaysDisabled )
          break;
        if ( (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                v7->featureStateCache,
                *requiresFeatures).exchange64 & 8) != 0 )
          goto LABEL_9;
        v5 = 0;
LABEL_10:
        ++requiresFeatures;
        if ( !v5 )
          goto LABEL_13;
      }
      if ( !v7->isEnabledByDefault )
      {
        v5 = 0;
        goto LABEL_13;
      }
LABEL_9:
      v5 = 1;
      goto LABEL_10;
    }
  }
LABEL_13:
  v8 = 128;
  if ( ((exchange >> 3) & 1) != v5 )
    v8 = 136;
  _InterlockedXor((volatile signed __int32 *)a1, v8);
  LODWORD(v10) = exchange ^ v8;
  return (union wil_details_FeatureStateCache)v10;
}
