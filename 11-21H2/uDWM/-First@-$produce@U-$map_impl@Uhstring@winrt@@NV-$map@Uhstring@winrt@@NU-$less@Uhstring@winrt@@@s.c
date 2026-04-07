/*
 * XREFs of ?First@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800F9E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$make@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@PEAU?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@3@@winrt@@YA?AU?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAPEAU?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@0@@Z @ 0x1800F93D0 (--$make@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@U.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::First(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( !a1 )
    v4 = 40LL;
  if ( v4 )
    v3 = v4 - 40;
  v6 = v3;
  try
  {
    winrt::make<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator,winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base> *>(
      &v7,
      &v6);
    *a2 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
