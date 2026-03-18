/*
 * XREFs of ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C03900BC
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0390078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C0159CF4 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C0377038 (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates(void)
{
  unsigned int v0; // edi
  unsigned __int64 *i; // rcx
  const struct wil_details_FeatureDescriptor *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int Results; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v0 = 0;
  for ( i = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; i = (unsigned __int64 *)((char *)v2 + 48) )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    v8 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v10 = 0;
    if ( *((_BYTE *)v2 + 21) || *((_BYTE *)v2 + 22) )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = RtlQueryFeatureConfiguration(
             *((unsigned int *)v2 + 4),
             (unsigned __int8)(*((_BYTE *)v2 + 20) - 2) > 1u,
             &v8,
             &v9);
      if ( v3 == -2147483614 )
      {
        v7 = 131LL;
        v4 = 131LL;
        do
        {
          **(_QWORD **)v2 = v4;
          v2 = wil_details_FeatureDescriptors_SkipPadding((_QWORD *)v2 + 6);
        }
        while ( v2 );
        return v0;
      }
    }
    Results = wil_details_BuildFeatureStateCacheFromQueryResults(
                v3,
                (const struct _RTL_FEATURE_CONFIGURATION *)&v9,
                (union wil_details_FeatureStateCache *)&v7);
    if ( Results )
      v0 = Results;
    **(_QWORD **)v2 = v7;
  }
  return v0;
}
