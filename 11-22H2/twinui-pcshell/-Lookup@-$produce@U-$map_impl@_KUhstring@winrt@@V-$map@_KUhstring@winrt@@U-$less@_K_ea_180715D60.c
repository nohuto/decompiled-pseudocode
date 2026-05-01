/*
 * XREFs of ?Lookup@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x180715D60
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Lookup@?$map_view_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@2@AEB_K@Z @ 0x1807159E0 (-Lookup@-$map_view_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>>::Lookup(
        __int64 a1,
        unsigned __int64 a2,
        struct winrt::impl::hstring_header **a3)
{
  __int64 v5; // rcx
  struct winrt::impl::hstring_header **v6; // rax
  struct winrt::impl::hstring_header *v7; // rcx
  __int64 result; // rax
  struct winrt::impl::hstring_header *v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *a3 = 0LL;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 40LL;
  try
  {
    v6 = winrt::map_view_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring,winrt::impl::collection_version>::Lookup(
           v5,
           &v9,
           &v10);
    v7 = *v6;
    *v6 = 0LL;
    *a3 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
