/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800F79F0
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1801CC24C (_anonymous_namespace_--TryGetTextFromProperty.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt::Windows::Foundation::IUnknown *a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *); // rsi
  int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+58h] [rbp+10h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v10 = 0LL;
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Foundation::IInspectable>>,
      &v10);
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
  }
  v12 = v6;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *))(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  v8 = v7(v6, *a3, a2);
  if ( v8 != -2147483637 && v8 != -2147467259 && v8 != -2147024894 && v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
