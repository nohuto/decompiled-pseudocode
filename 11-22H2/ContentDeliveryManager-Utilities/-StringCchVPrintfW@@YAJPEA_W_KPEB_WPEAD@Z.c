/*
 * XREFs of ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180085288
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x180085238 (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x180097128 (--$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@-$NativeString@V-$CoTaskMemPol.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchVPrintfW(wchar_t *a1, __int64 a2, const wchar_t *a3, va_list a4)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v6 = a2 - 1;
    v5 = 0;
    v7 = _vsnwprintf(a1, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147024774;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    a1[v6] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v5;
}
