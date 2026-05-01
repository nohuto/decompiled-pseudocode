/*
 * XREFs of ?IndexOf@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x18023D950
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOf@?$vector_view_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUri@Foundation@Windows@2@AEAI@Z @ 0x18023DA30 (-IndexOf@-$vector_view_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundat.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::IndexOf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  *a4 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::IndexOf(
          v5,
          &v7);
  return 0LL;
}
