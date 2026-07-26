/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C0121340
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0121240 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C0121434 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(PVOID a1)
{
  const struct wil_details_FeatureDescriptor *v1; // rbx
  const struct wil_details_FeatureDescriptor *v2; // rcx
  volatile signed __int32 *featureStateCache; // rax
  volatile signed __int32 v4; // edx
  BOOL v5; // eax
  union wil_details_FeatureStateCache *v6; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h]

  wil_details_UpdateFeatureConfiguredStates();
  v7 = 0;
  v1 = &wil_details_featureDescriptors_a;
  v2 = &wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
  {
    while ( 1 )
    {
      featureStateCache = (volatile signed __int32 *)v2->featureStateCache;
      if ( v2->featureStateCache )
        break;
      v2 = (const struct wil_details_FeatureDescriptor *)((char *)v2 + 8);
      if ( v2 >= (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
        goto LABEL_19;
    }
    while ( v2 )
    {
      v4 = *featureStateCache;
      if ( (*featureStateCache & 0x80u) != 0 )
      {
        if ( (v4 & 0x60) != 0 )
          v5 = (*featureStateCache & 0x60) == 64;
        else
          v5 = v2->isEnabledByDefault != 0;
        v7 = v7 & 0xFFFFFFEF | (16 * v5) ^ v4 & 0x10;
        _InterlockedXor((volatile signed __int32 *)v2->featureStateCache, v7);
      }
      for ( ++v2; ; v2 = (const struct wil_details_FeatureDescriptor *)((char *)v2 + 8) )
      {
        if ( v2 >= (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
          goto LABEL_19;
        featureStateCache = (volatile signed __int32 *)v2->featureStateCache;
        if ( v2->featureStateCache )
          break;
      }
    }
LABEL_19:
    while ( v1 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
    {
      v6 = v1->featureStateCache;
      if ( v1->featureStateCache )
      {
LABEL_26:
        if ( v1 )
        {
          wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(v6, v1);
          for ( ++v1;
                v1 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
                v1 = (const struct wil_details_FeatureDescriptor *)((char *)v1 + 8) )
          {
            v6 = v1->featureStateCache;
            if ( v1->featureStateCache )
              goto LABEL_26;
          }
        }
        return;
      }
      v1 = (const struct wil_details_FeatureDescriptor *)((char *)v1 + 8);
    }
  }
}
