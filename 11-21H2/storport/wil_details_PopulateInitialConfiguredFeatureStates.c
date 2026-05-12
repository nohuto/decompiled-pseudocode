/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00970BC
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0097078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0023AC0 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C00840D4 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates()
{
  unsigned int v0; // edi
  PDEVICE_OBJECT *i; // rcx
  PDEVICE_OBJECT *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v0 = 0;
  for ( i = (PDEVICE_OBJECT *)&wil_details_featureDescriptors_a; ; i = v2 + 6 )
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
      v3 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)v2 + 4),
             (unsigned __int8)(*((_BYTE *)v2 + 20) - 2) > 1u,
             &v8,
             &v9,
             v7);
      if ( v3 == -2147483614 )
      {
        v7 = 131LL;
        v4 = 131LL;
        do
        {
          *(_QWORD *)&(*v2)->Type = v4;
          v2 = wil_details_FeatureDescriptors_SkipPadding(v2 + 6);
        }
        while ( v2 );
        return v0;
      }
    }
    v6 = wil_details_BuildFeatureStateCacheFromQueryResults(v3, (__int64)&v9, &v7);
    if ( v6 )
      v0 = v6;
    *(_QWORD *)&(*v2)->Type = v7;
  }
  return v0;
}
