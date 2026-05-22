/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180089920
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180089A10 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

int __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4,
        int *a5)
{
  _DWORD *v6; // rdi
  char IsFeatureConfigured; // al
  int result; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v6 = a3;
  v9 = 0LL;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v10 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(&v9, (unsigned int)this, a3, (a2 >> 7) & 1, a5);
  *a4 = v10;
  if ( IsFeatureConfigured )
  {
    *v6 = HIDWORD(v9);
    result = BYTE4(v9);
    if ( DWORD2(v9) )
      result = BYTE4(v9) | 0x100;
    if ( HIDWORD(v10) )
      return result | 0x80;
  }
  else
  {
    *v6 = 0;
    return 0;
  }
  return result;
}
