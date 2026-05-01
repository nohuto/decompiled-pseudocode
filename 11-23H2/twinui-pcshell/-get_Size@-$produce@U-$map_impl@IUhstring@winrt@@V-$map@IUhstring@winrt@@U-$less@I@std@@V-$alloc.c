/*
 * XREFs of ?get_Size@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x18071C120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r8

  v2 = (a1 - 24) & -(__int64)(a1 != 0);
  *a2 = *(_DWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38);
  return 0LL;
}
