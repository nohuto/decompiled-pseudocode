/*
 * XREFs of ?Clear@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800FD3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXXZ @ 0x1800FD33C (-Clear@-$map_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::Clear(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 40LL;
  winrt::map_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::hstring,double>::Clear((volatile signed __int32 *)v2);
  return 0LL;
}
