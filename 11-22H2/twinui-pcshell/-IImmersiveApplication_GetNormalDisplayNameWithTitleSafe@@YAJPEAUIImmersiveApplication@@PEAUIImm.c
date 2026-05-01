/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18006E128
 * Callers:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18005DC38 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1802E6440 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_1802E6440.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
        struct IImmersiveApplication *a1,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a2,
        unsigned __int16 **a3)
{
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rcx
  int (__fastcall *v8)(struct IImmersiveApplication *, unsigned __int16 **); // rbx
  unsigned __int16 *v9; // rax
  unsigned __int16 *v11; // rbx
  LANGID ThreadUILanguage_0; // ax
  int v13; // eax
  const wchar_t *v14; // rdx
  unsigned __int16 *v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  unsigned __int16 *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]

  *a3 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v15);
  v5 = *(_QWORD *)a1;
  v16 = -1LL;
  v17 = -1LL;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, unsigned __int16 **))(v5 + 376))(a1, &v15);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)a1;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v8 = *(int (__fastcall **)(struct IImmersiveApplication *, unsigned __int16 **))(v7 + 248);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v18);
    v19 = -1LL;
    v20 = -1LL;
    if ( v8(a1, &v18) < 0 )
      goto LABEL_3;
    v11 = v15;
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v13 = IsBiDiLocale(ThreadUILanguage_0);
    v14 = asc_180832158;
    if ( !v13 )
      v14 = asc_180832168;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &v18,
                v14,
                v11) < 0 )
    {
LABEL_3:
      v9 = v15;
      v15 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
    }
    else
    {
      v9 = v18;
      v18 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
    }
    *a3 = v9;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v18);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v15);
  return (unsigned int)v6;
}
