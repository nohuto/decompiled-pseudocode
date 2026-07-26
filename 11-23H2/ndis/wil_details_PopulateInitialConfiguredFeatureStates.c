/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0160114
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0160078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036254 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C010C008 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_QWORD *wil_details_PopulateInitialConfiguredFeatureStates()
{
  int **v0; // rcx
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  v0 = &wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v0);
    v2 = result;
    if ( !result )
      break;
    ChangeStamp = 0LL;
    v5 = 0LL;
    *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
    FeatureConfiguration.VariantPayload = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = RtlQueryFeatureConfiguration(
             *((_DWORD *)result + 6),
             (RTL_FEATURE_CONFIGURATION_TYPE)((unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u),
             &ChangeStamp,
             &FeatureConfiguration);
      if ( v3 == -2147483614 )
      {
        v5 = 518LL;
        v4 = 518LL;
        do
        {
          *(_QWORD *)*v2 = v4;
          result = wil_details_FeatureDescriptors_SkipPadding(v2 + 7);
          v2 = result;
        }
        while ( result );
        return result;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v3, (__int64)&FeatureConfiguration, &v5);
    v0 = (int **)(v2 + 7);
    *(_QWORD *)*v2 = v5;
  }
  return result;
}
