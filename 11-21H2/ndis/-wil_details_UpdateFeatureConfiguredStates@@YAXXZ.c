/*
 * XREFs of ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C0121434
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C0121340 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C01211CC (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

void wil_details_UpdateFeatureConfiguredStates(void)
{
  const struct wil_details_FeatureDescriptor *i; // rbx
  RTL_FEATURE_ID featureId; // ecx
  NTSTATUS v2; // eax
  union wil_details_FeatureStateCache v3; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = &wil_details_featureDescriptors_a;
        i < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
        i = (const struct wil_details_FeatureDescriptor *)((char *)i + 8) )
  {
    if ( i->featureStateCache )
    {
LABEL_15:
      if ( i )
      {
        if ( !i->isAlwaysDisabled && !i->isAlwaysEnabled && !i->changeTime )
        {
          featureId = i->featureId;
          ChangeStamp = 0LL;
          *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
          FeatureConfiguration.VariantPayload = 0;
          v2 = RtlQueryFeatureConfiguration(
                 featureId,
                 RtlFeatureConfigurationRuntime,
                 &ChangeStamp,
                 &FeatureConfiguration);
          v3.exchange64 = 0LL;
          wil_details_BuildFeatureStateCacheFromQueryResults(v2, &FeatureConfiguration, &v3);
          _InterlockedXor(
            (volatile signed __int32 *)i->featureStateCache,
            (LOWORD(v3.exchange) ^ (unsigned __int16)i->featureStateCache->exchange) & 0x3E0);
        }
        for ( ++i;
              i < (const struct wil_details_FeatureDescriptor *)&wil_details_featureDescriptors_z;
              i = (const struct wil_details_FeatureDescriptor *)((char *)i + 8) )
        {
          if ( i->featureStateCache )
            goto LABEL_15;
        }
      }
      return;
    }
  }
}
