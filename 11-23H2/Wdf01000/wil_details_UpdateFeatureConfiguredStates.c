/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x1C00B029C
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C00B0010 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0017930 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C00B0070 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

const wil_details_FeatureDescriptor *wil_details_UpdateFeatureConfiguredStates()
{
  const wil_details_FeatureDescriptor *i; // rcx
  __int64 featureId; // rcx
  int v2; // eax
  const wil_details_FeatureDescriptor *result; // rax
  volatile signed __int32 **v4; // rbx
  wil_details_FeatureStateCache update; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = wil_details_featureDescriptors_a; ; i = (const wil_details_FeatureDescriptor *)(v4 + 7) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !result->isAlwaysDisabled && !result->isAlwaysEnabled && !result->changeTime )
    {
      featureId = result->featureId;
      changeStamp = 0LL;
      *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
      featureConfiguration.VariantPayload = 0;
      v2 = RtlQueryFeatureConfiguration(featureId, 1LL, &changeStamp, &featureConfiguration);
      update.exchange64 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, &featureConfiguration, &update);
      _InterlockedXor(*v4, (LOWORD(update.exchange64) ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
