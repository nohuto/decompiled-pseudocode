/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@U?$IMapView@IUhstring@winrt@@@5673@U?$IIterable@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x180713290
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IMap`2<UInt32, String>",
          (winrt::impl *)0x35);
  return a2;
}
