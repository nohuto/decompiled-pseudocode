/*
 * XREFs of ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C01211CC
 * Callers:
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C0121434 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C01563A8 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(
        unsigned int a1,
        const struct _RTL_FEATURE_CONFIGURATION *a2,
        union wil_details_FeatureStateCache *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx

  v3 = 0;
  if ( a1 == -2147483614 || a1 == -1073741275 )
  {
    a3->exchange64 = 0LL;
    goto LABEL_9;
  }
  a3->exchange64 = 0LL;
  if ( a1 )
  {
    if ( a1 != 279 )
    {
      v3 = a1;
LABEL_9:
      v4 = 131;
      goto LABEL_10;
    }
    v4 = (2 * (*((_DWORD *)a2 + 1) & 0x80)) | 0x83;
  }
  else
  {
    v4 = (2 * (*((_DWORD *)a2 + 1) & 0xB0 | (4 * (*((_DWORD *)a2 + 1) & 0x40)))) | 0x83;
  }
LABEL_10:
  a3->exchange = v4;
  return v3;
}
