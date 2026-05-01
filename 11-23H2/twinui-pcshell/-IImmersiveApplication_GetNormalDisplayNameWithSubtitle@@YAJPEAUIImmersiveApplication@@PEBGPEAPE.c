/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPEAG@Z @ 0x180191A80
 * Callers:
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x1801D7AC0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1802E6440 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_1802E6440.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithSubtitle(
        struct IImmersiveApplication *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rbx
  LANGID ThreadUILanguage_0; // ax
  int v15; // eax
  const wchar_t *v16; // rdx
  unsigned __int16 *v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+30h] [rbp-20h]
  unsigned __int16 *v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a3 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  v6 = *(_QWORD *)a1;
  v18 = -1LL;
  v19 = -1LL;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, unsigned __int16 **))(v6 + 376))(a1, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (int)"shell\\lib\\immersiveapphelpers\\displaynamehelpers.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  if ( a2 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    if ( v9 )
    {
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v20,
              a2,
              0xFFFFFFFFFFFFFFFFuLL);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v13 = v17;
        ThreadUILanguage_0 = GetThreadUILanguage_0();
        v15 = IsBiDiLocale(ThreadUILanguage_0);
        v16 = asc_180832158;
        if ( !v15 )
          v16 = asc_180832168;
        v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &v20,
                v16,
                v13);
        v8 = v11;
        if ( v11 >= 0 )
        {
          *a3 = v20;
          v20 = 0LL;
          v22 = 0LL;
          v21 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
          goto LABEL_7;
        }
        v12 = 84LL;
      }
      else
      {
        v12 = 83LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"shell\\lib\\immersiveapphelpers\\displaynamehelpers.cpp",
        (const char *)(unsigned int)v11);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      goto LABEL_8;
    }
  }
  *a3 = v17;
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
LABEL_7:
  v8 = 0;
LABEL_8:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  return v8;
}
