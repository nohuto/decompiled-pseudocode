/*
 * XREFs of ?find_interface@?$implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FBC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2
     - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>> )
    v2 = a2[1] - 0x7ECF691D357E75BALL;
  v3 = 0LL;
  if ( !v2 )
    return (a1 + 16) & -(__int64)(a1 != 0);
  return v3;
}
