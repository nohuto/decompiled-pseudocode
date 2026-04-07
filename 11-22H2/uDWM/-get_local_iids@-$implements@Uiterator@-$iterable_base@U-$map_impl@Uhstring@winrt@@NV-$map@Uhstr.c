/*
 * XREFs of ?get_local_iids@?$implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1800598E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>>::value;
  return a2;
}
