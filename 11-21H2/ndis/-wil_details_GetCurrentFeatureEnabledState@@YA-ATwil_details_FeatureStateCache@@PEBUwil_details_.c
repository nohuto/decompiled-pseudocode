/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00348A0
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00347A8 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0034774 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C0101008 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 */

union wil_details_FeatureStateCache __fastcall wil_details_GetCurrentFeatureEnabledState(
        const struct wil_details_FeatureDescriptor *a1,
        int *a2)
{
  unsigned int featureId; // edx
  BOOL v5; // r8d
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rdi
  const struct wil_details_FeatureDescriptor *v12; // rax
  char exchange64; // al
  bool v14; // zf
  int v15; // eax
  struct wil_FeatureState v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp+10h]

  featureId = a1->featureId;
  v5 = (unsigned __int8)(a1->changeTime - 2) <= 1u;
  *a2 = 1;
  memset(&v17, 0, sizeof(v17));
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v17, featureId, v5, a2);
  HIDWORD(v18) = 0;
  v7 = ((v17.isVariantConfiguration != 0 ? 0x200 : 0) | (v17.hasNotification != 0 ? 0x100 : 0)) ^ (32
                                                                                                 * (v17.enabledState & (unsigned __int8)-(v6 != 0))) & 0x60;
  if ( ((32 * (v17.enabledState & (unsigned __int8)-(v6 != 0))) & 0x60) != 0 )
  {
    v9 = 0;
    if ( v17.enabledState == wil_FeatureEnabledState_Enabled )
      v9 = 16;
    v8 = v9 | v7 & 0xFFFFFFEF;
  }
  else
  {
    v8 = v7 & 0xFFFFFFEF | (a1->isEnabledByDefault != 0 ? 0x10 : 0);
  }
  v10 = ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 1)) & 8 ^ v8;
  LODWORD(v18) = v10;
  if ( (v10 & 8) != 0 )
  {
    requiresFeatures = a1->requiresFeatures;
    if ( requiresFeatures )
    {
      do
      {
        v12 = *requiresFeatures;
        if ( !*requiresFeatures )
          return (union wil_details_FeatureStateCache)v18;
        if ( v12->isAlwaysEnabled || v12->isAlwaysDisabled )
        {
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = v12->isEnabledByDefault == 0;
        }
        else
        {
          exchange64 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                         v12->featureStateCache,
                         *requiresFeatures).exchange64;
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = (exchange64 & 8) == 0;
        }
        if ( v14 )
        {
LABEL_17:
          v15 = 0;
          goto LABEL_18;
        }
        v15 = 8;
LABEL_18:
        ++requiresFeatures;
        v10 = v15 | v10 & 0xFFFFFFF7;
        LODWORD(v18) = v10;
      }
      while ( (v10 & 8) != 0 );
    }
  }
  return (union wil_details_FeatureStateCache)v18;
}
