/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x140A12624
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14067EE70 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x14035D2A0 (RtlQueryFeatureConfiguration.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403749F4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14080EC1C (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

__int64 (__fastcall **wil_details_UpdateFeatureConfiguredStates())()
{
  __int64 (__fastcall **i)(); // rcx
  RTL_FEATURE_ID v1; // ecx
  NTSTATUS v2; // eax
  __int64 (__fastcall **result)(); // rax
  volatile signed __int32 **v4; // rbx
  ULONGLONG ChangeStamp; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+28h] [rbp-20h] BYREF

  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = (__int64 (__fastcall **)())(v4 + 7) )
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
      ChangeStamp = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&FeatureConfiguration, &ChangeStamp);
      _InterlockedXor(*v4, ((unsigned __int16)ChangeStamp ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
