/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1806FA890
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@Uhstring@winrt@@@2@@Z @ 0x1806FAAC4 (-GetMany@-$vector_view_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocato.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::hstring>>::GetMany(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  memset_0(a4, 0, 8LL * a3);
  try
  {
    *a5 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::GetMany();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
