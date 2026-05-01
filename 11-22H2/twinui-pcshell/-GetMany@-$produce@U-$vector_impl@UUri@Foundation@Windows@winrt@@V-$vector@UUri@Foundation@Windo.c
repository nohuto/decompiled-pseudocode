/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x18023C580
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UUri@Foundation@Windows@winrt@@@2@@Z @ 0x18023C7B4 (-GetMany@-$vector_view_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundat.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-10h]

  memset_0(a4, 0, 8LL * a3);
  v9 = a1 + 24;
  if ( !a1 )
    v9 = 40LL;
  v11 = a4;
  v12 = a3;
  *a5 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::GetMany(
          v9,
          a2,
          &v11);
  return 0LL;
}
