/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x1807132C0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IMap`2<String, Windows.Internal.Shell.RemoteSystem>",
          (winrt::impl *)0x52);
  return a2;
}
