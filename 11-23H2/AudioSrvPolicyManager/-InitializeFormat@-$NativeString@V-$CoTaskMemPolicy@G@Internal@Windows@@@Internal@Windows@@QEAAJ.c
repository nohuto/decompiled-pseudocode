/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180010F8C
 * Callers:
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x18000F0B0 (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18000F2A0 (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x180047138 (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180011134 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18002A67C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800472A8 (--R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        _QWORD *a1,
        __int64 a2,
        ...)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ebx
  _WORD *v10; // rax
  int v11; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  void *v15; // rcx
  LPVOID v16; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  SIZE_T cb[8]; // [rsp+38h] [rbp-40h] BYREF
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = 32LL;
  v5 = a1 + 2;
  while ( 1 )
  {
    v6 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
LABEL_20:
      v9 = -2147024362;
LABEL_21:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
      return (unsigned int)v9;
    }
    v7 = *v5;
    if ( *v5 == -1LL )
    {
      v8 = a1[1];
      if ( v8 == -1 )
      {
        if ( *a1 )
        {
          v8 = -1LL;
          do
            ++v8;
          while ( *(_WORD *)(*a1 + 2 * v8) );
        }
        else
        {
          v8 = 0LL;
        }
        a1[1] = v8;
      }
      v4 = v8 + 1;
      v7 = v4 & -(__int64)(*a1 != 0LL);
      *v5 = v7;
    }
    if ( !v7 )
    {
      v9 = ULongLongMult(v6, 2uLL, cb);
      if ( v9 >= 0 )
      {
        v10 = CoTaskMemAlloc(cb[0]);
        if ( v10 )
        {
          *v5 = v6;
          *a1 = v10;
          *v10 = 0;
          goto LABEL_18;
        }
        v9 = -2147024882;
      }
LABEL_17:
      if ( v9 < 0 )
        goto LABEL_21;
      goto LABEL_18;
    }
    v9 = 0;
    if ( v6 <= v7 )
      goto LABEL_17;
    v9 = ULongLongMult(v7, 2uLL, &v17);
    if ( v9 < 0 )
      goto LABEL_17;
    v14 = v17;
    if ( v17 - v13 > 0x800 )
      v14 = v13 + 2048;
    v15 = (void *)*a1;
    if ( v6 > v14 )
      v14 = v6;
    v17 = v14;
    v16 = CoTaskMemRealloc(v15, 2 * v14);
    if ( !v16 )
    {
      v9 = -2147024882;
      goto LABEL_21;
    }
    *v5 = v14;
    *a1 = v16;
LABEL_18:
    v11 = _lambda_fe718337787c493ce2d833414db25eba_::operator()(v4, a2, (__int64 *)va, *a1, *v5);
    v9 = v11;
    if ( v11 != -2147024774 )
      break;
    v4 = *v5 + 32;
    if ( v4 < *v5 )
      goto LABEL_20;
  }
  if ( v11 < 0 )
    goto LABEL_21;
  a1[1] = -1LL;
  return (unsigned int)v9;
}
