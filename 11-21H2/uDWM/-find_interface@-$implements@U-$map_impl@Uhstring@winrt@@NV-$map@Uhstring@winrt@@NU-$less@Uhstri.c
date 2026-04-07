/*
 * XREFs of ?find_interface@?$implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FBC00
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uiid_finder@23@@?$interface_list@U?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@2345@@impl@winrt@@SAPEAXPEBU?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@12@AEBUiid_finder@12@@Z @ 0x1800F91DC (--$find@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$al.c)
 */

__int64 __fastcall winrt::implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf
  __int64 v3; // rax
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>;
  v2 = *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>;
  v6 = a2;
  if ( v2 )
    v3 = a2[1] + 0xB0466D616D1F56FLL;
  if ( v3 )
    return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::find<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::impl::iid_finder>(
             a1,
             &v6);
  else
    return (a1 + 16) & -(__int64)(a1 != 0);
}
