/*
 * XREFs of ?Append@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180521B50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAURect@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x180520634 (--$_Emplace_reallocate@AEBURect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::Append(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  _OWORD *v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
  v4 = v3 & ((unsigned __int128)-(__int128)(unsigned __int64)(v3 + 40) >> 64);
  v5 = *(_OWORD **)(v4 + 0x38);
  if ( v5 == *(_OWORD **)(v4 + 0x40) )
  {
    try
    {
      std::vector<winrt::Windows::Foundation::Rect>::_Emplace_reallocate<winrt::Windows::Foundation::Rect const &>(
        (const void **)(v4 + 48),
        *(_BYTE **)(v4 + 56),
        a2);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v7);
    }
  }
  else
  {
    *v5 = *a2;
    *(_QWORD *)(v4 + 56) += 16LL;
  }
  return 0LL;
}
