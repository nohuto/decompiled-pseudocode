/*
 * XREFs of ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C01563A8
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C01211CC (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0121240 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 */

__int64 wil_InitializeFeatureStaging(void)
{
  const struct wil_details_FeatureDescriptor *v0; // rdi
  unsigned int v1; // esi
  const struct wil_details_FeatureDescriptor *v2; // rbx
  const struct wil_details_FeatureDescriptor *v3; // rcx
  const struct wil_details_FeatureDescriptor *v4; // rbx
  NTSTATUS v6; // eax
  unsigned __int64 *p_exchange64; // rcx
  unsigned int v8; // eax
  union wil_details_FeatureStateCache *featureStateCache; // rcx
  volatile signed __int32 *v10; // rax
  volatile signed __int32 v11; // edx
  int v12; // eax
  union wil_details_FeatureStateCache *v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-40h]
  union wil_details_FeatureStateCache v15; // [rsp+28h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+30h] [rbp-30h] BYREF
  ULONGLONG ObservedChangeStamp; // [rsp+38h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+40h] [rbp-20h] BYREF

  v0 = &wil_details_featureDescriptors_a;
  ObservedChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  v1 = 0;
  v2 = &wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
  {
    while ( !v2->featureStateCache )
    {
      v2 = (const struct wil_details_FeatureDescriptor *)((char *)v2 + 8);
      if ( v2 >= (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
        goto LABEL_2;
    }
LABEL_24:
    if ( v2 )
    {
      ChangeStamp = 0LL;
      *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
      FeatureConfiguration.VariantPayload = 0;
      v15.exchange64 = 0LL;
      if ( v2->isAlwaysDisabled || v2->isAlwaysEnabled )
      {
        v6 = -1073741275;
      }
      else
      {
        v6 = RtlQueryFeatureConfiguration(
               v2->featureId,
               (RTL_FEATURE_CONFIGURATION_TYPE)((unsigned __int8)(v2->changeTime - 2) > 1u),
               &ChangeStamp,
               &FeatureConfiguration);
        if ( v6 == -2147483614 )
        {
          p_exchange64 = &v2->featureStateCache->exchange64;
LABEL_15:
          *p_exchange64 = 131LL;
          for ( ++v2;
                v2 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
                v2 = (const struct wil_details_FeatureDescriptor *)((char *)v2 + 8) )
          {
            p_exchange64 = &v2->featureStateCache->exchange64;
            if ( v2->featureStateCache )
            {
              if ( v2 )
                goto LABEL_15;
              goto LABEL_2;
            }
          }
          goto LABEL_2;
        }
      }
      v8 = wil_details_BuildFeatureStateCacheFromQueryResults(v6, &FeatureConfiguration, &v15);
      featureStateCache = v2->featureStateCache;
      if ( v8 )
        v1 = v8;
      ++v2;
      *featureStateCache = v15;
      while ( v2 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
      {
        if ( v2->featureStateCache )
          goto LABEL_24;
        v2 = (const struct wil_details_FeatureDescriptor *)((char *)v2 + 8);
      }
    }
  }
LABEL_2:
  v14 = 0;
  v3 = &wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
  {
    while ( 1 )
    {
      v10 = (volatile signed __int32 *)v3->featureStateCache;
      if ( v3->featureStateCache )
        break;
      v3 = (const struct wil_details_FeatureDescriptor *)((char *)v3 + 8);
      if ( v3 >= (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
        goto LABEL_3;
    }
LABEL_45:
    if ( v3 )
    {
      v11 = *v10;
      if ( (*v10 & 0x80u) != 0 )
      {
        v12 = 0;
        if ( (v11 & 0x60) != 0 )
          LOBYTE(v12) = (v11 & 0x60) == 64;
        else
          LOBYTE(v12) = v3->isEnabledByDefault != 0;
        v14 = v14 & 0xFFFFFFEF | (16 * v12) ^ v11 & 0x10;
        _InterlockedXor((volatile signed __int32 *)v3->featureStateCache, v14);
      }
      for ( ++v3;
            v3 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
            v3 = (const struct wil_details_FeatureDescriptor *)((char *)v3 + 8) )
      {
        v10 = (volatile signed __int32 *)v3->featureStateCache;
        if ( v3->featureStateCache )
          goto LABEL_45;
      }
    }
  }
LABEL_3:
  v4 = &wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
  {
    while ( 1 )
    {
      v13 = v4->featureStateCache;
      if ( v4->featureStateCache )
        break;
      v4 = (const struct wil_details_FeatureDescriptor *)((char *)v4 + 8);
      if ( v4 >= (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
        goto LABEL_4;
    }
LABEL_55:
    if ( v4 )
    {
      wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(v13, v4);
      for ( ++v4;
            v4 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
            v4 = (const struct wil_details_FeatureDescriptor *)((char *)v4 + 8) )
      {
        v13 = v4->featureStateCache;
        if ( v4->featureStateCache )
          goto LABEL_55;
      }
    }
  }
LABEL_4:
  if ( !v1 )
  {
    while ( 1 )
    {
      if ( v0 >= (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z )
        return 0;
      if ( v0->featureStateCache )
        break;
      v0 = (const struct wil_details_FeatureDescriptor *)((char *)v0 + 8);
    }
LABEL_69:
    if ( !v0 )
      return 0;
    if ( v0->isAlwaysDisabled || v0->isAlwaysEnabled || v0->changeTime )
    {
      for ( ++v0;
            v0 < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
            v0 = (const struct wil_details_FeatureDescriptor *)((char *)v0 + 8) )
      {
        if ( v0->featureStateCache )
          goto LABEL_69;
      }
      return 0;
    }
    v1 = RtlRegisterFeatureConfigurationChangeNotification(
           (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_OnFeatureConfigurationChange,
           0LL,
           &ObservedChangeStamp,
           &wil_details_featureChangeNotification);
    if ( v1 )
      wil_details_featureChangeNotification = 0LL;
  }
  return v1;
}
