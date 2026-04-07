/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@XZ @ 0x1800FFB60
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@XZ @ 0x1800FD44C (-Current@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@U.c)
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@3@Uinput_iterator_tag@std@@@Z @ 0x1800FD7E8 (-GetMany@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@U.c)
 * Callees:
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBN@winrt@@YA?A_PAEBUhstring@0@AEBN@Z @ 0x1800FC56C (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winr.c)
 */

unsigned __int64 *__fastcall winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        unsigned __int64 *a2)
{
  winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::hstring const &,double const &>(
    a2,
    (__int64 *)(*(_QWORD *)(a1 + 40) + 32LL));
  return a2;
}
