/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18078297C
 * Callers:
 *     ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x18077C318 (--$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180782AA4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180745C4C (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_EnsureCapacity(
        LPVOID *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  _WORD *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  LPVOID v10; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = (unsigned __int64)a1[2];
  v5 = 0;
  if ( v4 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v4 = (unsigned __int64)a1[1] + 1;
    else
      v4 = 0LL;
    a1[2] = (LPVOID)v4;
  }
  if ( v4 )
  {
    if ( v2 <= v4 )
      return v5;
    v7 = 2 * v4;
    if ( is_mul_ok(v4, 2uLL) )
    {
      v8 = v4;
      v9 = v4 + 2048;
      if ( v8 <= 0x800 )
        v9 = v7;
      if ( v2 <= v9 )
        v2 = v9;
      v10 = CoTaskMemRealloc(*a1, 2 * v2);
      if ( v10 )
      {
        a1[2] = (LPVOID)v2;
        *a1 = v10;
        return v5;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024362;
  }
  if ( !is_mul_ok(v2, 2uLL) )
    return (unsigned int)-2147024362;
  v6 = CoTaskMemAlloc(2 * v2);
  if ( !v6 )
    return (unsigned int)-2147024882;
  a1[2] = (LPVOID)v2;
  *a1 = v6;
  *v6 = 0;
  return v5;
}
