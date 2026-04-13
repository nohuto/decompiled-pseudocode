/*
 * XREFs of wil_QueryFeatureState @ 0x180045A34
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180038110 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  return wil_RtlStagingConfig_QueryFeatureState();
}
