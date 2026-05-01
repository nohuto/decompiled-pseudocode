/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1802381D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAA?A_TAEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022F380 (--$_Emplace_back_with_unused_capacity@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundatio.c)
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18022F3AC (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = (__int64 *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 + 40) >> 64));
  v4 = v3 + 6;
  if ( v3[7] == v3[8] )
  {
    try
    {
      std::vector<winrt::Windows::Foundation::Uri>::_Emplace_reallocate<winrt::Windows::Foundation::Uri const &>(
        v4,
        v3[7],
        &v7);
    }
    catch ( ... )
    {
      return *(unsigned int *)winrt::to_hresult(&v6);
    }
  }
  else
  {
    std::vector<winrt::Windows::Foundation::Uri>::_Emplace_back_with_unused_capacity<winrt::Windows::Foundation::Uri const &>(
      (__int64)v4,
      &v7);
  }
  return 0LL;
}
