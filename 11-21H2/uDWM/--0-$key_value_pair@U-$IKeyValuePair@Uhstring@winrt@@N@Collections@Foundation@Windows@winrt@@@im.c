/*
 * XREFs of ??0?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEAA@Uhstring@2@N@Z @ 0x1800F9544
 * Callers:
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@N@Z @ 0x1800F94F4 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005FA60 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>(
        __int64 a1,
        volatile signed __int32 **a2,
        double a3)
{
  volatile signed __int32 *v4; // rax

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::`vftable';
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(double *)(a1 + 32) = a3;
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}
