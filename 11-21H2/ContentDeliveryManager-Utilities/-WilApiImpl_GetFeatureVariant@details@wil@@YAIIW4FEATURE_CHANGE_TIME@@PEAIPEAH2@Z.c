/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180047030
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18003A7E8 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

int __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4)
{
  bool IsFeatureConfigured; // al
  int result; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (__int64)&v8,
                          (unsigned int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1);
  *a4 = v9;
  if ( IsFeatureConfigured )
  {
    *a3 = HIDWORD(v8);
    result = BYTE4(v8);
    if ( DWORD2(v8) )
      result = BYTE4(v8) | 0x100;
    if ( HIDWORD(v9) )
      return result | 0x80;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
