/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180046FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18003A7E8 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  bool IsFeatureConfigured; // al
  unsigned int v5; // ecx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (__int64)&v7,
                          (unsigned int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1);
  v5 = 0;
  if ( IsFeatureConfigured )
    v5 = v7;
  if ( (_DWORD)v8 )
    v5 |= 0x80u;
  if ( HIDWORD(v8) )
    v5 |= 0x40u;
  return v5;
}
