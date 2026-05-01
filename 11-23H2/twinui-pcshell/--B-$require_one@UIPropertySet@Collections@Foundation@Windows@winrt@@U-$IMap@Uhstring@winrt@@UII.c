/*
 * XREFs of ??B?$require_one@UIPropertySet@Collections@Foundation@Windows@winrt@@U?$IMap@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@2345@@impl@winrt@@QEBA?AU?$IMap@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@Windows@2@XZ @ 0x1800932B4
 * Callers:
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1802645F8 (-HasKey@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180271C00 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::require_one<winrt::Windows::Foundation::Collections::IPropertySet,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Foundation::IInspectable>>::operator winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Foundation::IInspectable>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::impl::IStaticLifetimeCollection>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
