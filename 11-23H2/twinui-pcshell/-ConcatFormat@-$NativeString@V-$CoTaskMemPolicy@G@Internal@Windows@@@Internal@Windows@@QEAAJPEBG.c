/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x1802E6312
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1802E6440 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_1802E6440.c)
 * Callees:
 *     ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800C5690 (--R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800C5760 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1802D08F6 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
        __int64 a1,
        const wchar_t *a2,
        va_list a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  unsigned __int64 v9; // rsi
  int v10; // eax
  wchar_t **v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rax
  wchar_t *v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned __int64 v19; // [rsp+40h] [rbp-28h]

  if ( *(_QWORD *)a1 && **(_WORD **)a1 )
  {
    v17 = 0LL;
    v6 = 32LL;
    v18 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             (LPVOID *)&v17,
             v6);
      if ( v8 < 0 )
        goto LABEL_8;
      v9 = v19;
      v10 = _lambda_fe718337787c493ce2d833414db25eba_::operator()(v7, a2, a3, v17, v19);
      v8 = v10;
      if ( v10 != -2147024774 )
        break;
      v6 = v9 + 32;
      if ( v9 + 32 < v9 )
      {
        v8 = -2147024362;
LABEL_8:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
        goto LABEL_9;
      }
    }
    if ( v10 < 0 )
      goto LABEL_8;
    v18 = -1LL;
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(a1, &v17);
LABEL_9:
    v11 = &v17;
LABEL_18:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
  }
  else
  {
    v12 = 32LL;
    while ( 1 )
    {
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             (LPVOID *)a1,
             v12);
      if ( v8 < 0 )
        goto LABEL_17;
      v14 = _lambda_fe718337787c493ce2d833414db25eba_::operator()(v13, a2, a3, *(wchar_t **)a1, *(_QWORD *)(a1 + 16));
      v8 = v14;
      if ( v14 != -2147024774 )
        break;
      v15 = *(_QWORD *)(a1 + 16);
      v12 = v15 + 32;
      if ( v15 + 32 < v15 )
      {
        v8 = -2147024362;
LABEL_17:
        v11 = (wchar_t **)a1;
        goto LABEL_18;
      }
    }
    if ( v14 < 0 )
      goto LABEL_17;
    *(_QWORD *)(a1 + 8) = -1LL;
  }
  return (unsigned int)v8;
}
