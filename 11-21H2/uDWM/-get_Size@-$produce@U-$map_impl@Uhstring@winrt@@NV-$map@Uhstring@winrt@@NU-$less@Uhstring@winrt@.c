/*
 * XREFs of ?get_Size@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x1800FBE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r8

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  *a2 = *(_DWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38);
  return 0LL;
}
