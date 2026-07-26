/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x1C010C24C
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C010C230 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036254 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C010C008 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_QWORD *wil_details_UpdateFeatureConfiguredStates()
{
  int **i; // rcx
  RTL_FEATURE_ID v1; // ecx
  NTSTATUS v2; // eax
  _QWORD *result; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v4 + 7) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((_DWORD *)result + 6);
      ChangeStamp = 0LL;
      *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
      FeatureConfiguration.VariantPayload = 0;
      v2 = RtlQueryFeatureConfiguration(v1, RtlFeatureConfigurationRuntime, &ChangeStamp, &FeatureConfiguration);
      v5 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&FeatureConfiguration, &v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
