/*
 * XREFs of ??$find@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uiid_finder@23@@?$interface_list@U?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@2345@@impl@winrt@@SAPEAXPEBU?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@12@AEBUiid_finder@12@@Z @ 0x1800F91DC
 * Callers:
 *     ?find_interface@?$implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FBC00 (-find_interface@-$implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstri.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::find<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>>;
  if ( !v4 )
    v4 = v3[1] + 0xD1B57A08A0B5D63LL;
  v5 = 0LL;
  if ( !v4 )
    return (a1 + 24) & -(__int64)(a1 != 0);
  v7 = *v3
     - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>;
  if ( *v3 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>> )
    v7 = v3[1] - 0x4C5EB21301DCC3A4LL;
  if ( !v7 )
    return (a1 + 32) & -(__int64)(a1 != 0);
  return v5;
}
