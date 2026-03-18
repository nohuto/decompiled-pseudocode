/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x140A12374
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14067EE70 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x14035D100 (RtlQueryFeatureConfiguration.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140374854 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14080E94C (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

__int64 (__fastcall **wil_details_UpdateFeatureConfiguredStates())()
{
  __int64 (__fastcall **i)(); // rcx
  unsigned int v1; // ecx
  int v2; // eax
  __int64 (__fastcall **result)(); // rax
  volatile signed __int32 **v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = (__int64 (__fastcall **)())(v4 + 7) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((_DWORD *)result + 6);
      v5 = 0LL;
      v6 = 0LL;
      v7 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1u, &v5, (__int64)&v6);
      v5 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&v6, &v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
