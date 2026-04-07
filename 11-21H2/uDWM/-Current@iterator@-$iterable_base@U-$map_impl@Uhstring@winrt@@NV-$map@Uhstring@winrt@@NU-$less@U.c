/*
 * XREFs of ?Current@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@XZ @ 0x1800F9DFC
 * Callers:
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FBCA0 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@wi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800F9734 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800FBB18 (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@XZ @ 0x1800FBB50 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@wi.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator::Current(
        _QWORD *a1,
        __int64 a2)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  if ( a1[5] == a1[6] )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator::current_value_withlock(
    a1,
    a2);
  return a2;
}
