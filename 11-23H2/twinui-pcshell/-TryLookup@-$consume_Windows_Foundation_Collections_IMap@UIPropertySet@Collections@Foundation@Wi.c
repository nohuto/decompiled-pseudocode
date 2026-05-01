/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C
 * Callers:
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x180093414 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180709A10 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 *     ??$TrySerialize@G@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAG@Z @ 0x180709C98 (--$TrySerialize@G@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_string_view@GU-$cha.c)
 *     ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x180709D4C (--$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_stri.c)
 *     ??$TrySerialize@_K@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEA_K@Z @ 0x180709E08 (--$TrySerialize@_K@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_string_view@GU-$ch.c)
 * Callees:
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@@Z @ 0x1800933D8 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt::Windows::Foundation::IUnknown *a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *); // rbp
  unsigned int v9; // eax
  char v11; // [rsp+60h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v12; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::impl::IStaticLifetimeCollection>, &v13);
    v6 = v13;
    v7 = v13;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v14 = v6;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *))(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  v9 = v8(v6, *a3, a2);
  winrt::impl::check_hresult_allow_bounds(&v11, v9);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  return a2;
}
