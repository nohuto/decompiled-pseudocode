/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x180237C2C
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180237DAE (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_180237DAE.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18008D040 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18022AC0C (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
        __int64 a1,
        const unsigned __int16 *a2,
        va_list a3)
{
  unsigned __int64 v6; // rdx
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int16 **v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int16 *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int16 *v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  unsigned __int64 v17; // [rsp+30h] [rbp-10h]
  int v18; // [rsp+70h] [rbp+30h] BYREF

  if ( *(_QWORD *)a1 && **(_WORD **)a1 )
  {
    v15 = 0LL;
    v6 = 32LL;
    v16 = 0LL;
    v17 = 0LL;
    while ( 1 )
    {
      v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             (LPVOID *)&v15,
             v6);
      if ( v7 < 0 )
        goto LABEL_9;
      _o__set_errno(0LL);
      v8 = v17;
      v7 = StringCchVPrintfW(v15, v17, a2, a3);
      if ( v7 != -2147024774 )
        goto LABEL_13;
      _o__get_errno(&v18);
      if ( v18 == 22 )
        break;
      v6 = v8 + 32;
      if ( v8 + 32 < v8 )
      {
        v7 = -2147024362;
        goto LABEL_9;
      }
    }
    v7 = -2147024809;
LABEL_13:
    if ( v7 < 0 )
    {
LABEL_9:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
      goto LABEL_11;
    }
    v16 = -1LL;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
           a1,
           (__int64 *)&v15);
LABEL_11:
    v9 = &v15;
LABEL_22:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
  }
  else
  {
    v10 = 32LL;
    while ( 1 )
    {
      v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             (LPVOID *)a1,
             v10);
      if ( v7 < 0 )
        goto LABEL_21;
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(unsigned __int16 **)a1;
      _o__set_errno(0LL);
      v7 = StringCchVPrintfW(v12, v11, a2, a3);
      if ( v7 != -2147024774 )
        goto LABEL_25;
      _o__get_errno(&v18);
      if ( v18 == 22 )
        break;
      v13 = *(_QWORD *)(a1 + 16);
      v10 = v13 + 32;
      if ( v13 + 32 < v13 )
      {
        v7 = -2147024362;
        goto LABEL_21;
      }
    }
    v7 = -2147024809;
LABEL_25:
    if ( v7 < 0 )
    {
LABEL_21:
      v9 = (unsigned __int16 **)a1;
      goto LABEL_22;
    }
    *(_QWORD *)(a1 + 8) = -1LL;
  }
  return (unsigned int)v7;
}
