/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180042A00
 * Callers:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x180029804 (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800793E4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x180097128 (--$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180099690 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800C4664 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180041AE4 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042B18 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // r9
  _QWORD *v5; // rcx
  int v6; // ebx
  _WORD *v7; // rax
  __int64 v8; // r9
  SIZE_T v9; // rsi
  LPVOID v10; // rax
  SIZE_T cb; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount();
    if ( *v5 )
      v4 = v5[1] + 1LL;
    else
      v4 = 0LL;
    v5[2] = v4;
  }
  if ( v4 )
  {
    v6 = 0;
    if ( v2 > v4 )
    {
      v6 = ULongLongMult(v4, 2uLL, &cb);
      if ( v6 >= 0 )
      {
        v9 = cb;
        if ( cb - v8 > 0x800 )
          v9 = v8 + 2048;
        if ( v2 > v9 )
          v9 = v2;
        v10 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v9);
        if ( v10 )
        {
          *(_QWORD *)(a1 + 16) = v9;
          *(_QWORD *)a1 = v10;
          return (unsigned int)v6;
        }
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    v6 = ULongLongMult(v2, 2uLL, &cb);
    if ( v6 >= 0 )
    {
      v7 = CoTaskMemAlloc(cb);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v7;
        *v7 = 0;
        return (unsigned int)v6;
      }
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v6;
}
