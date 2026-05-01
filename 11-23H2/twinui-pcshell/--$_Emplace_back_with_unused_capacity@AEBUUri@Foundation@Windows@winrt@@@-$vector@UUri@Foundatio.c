/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAA?A_TAEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022F380
 * Callers:
 *     ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022FF64 (--$emplace@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$allocat.c)
 *     ?Append@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1802381D0 (-Append@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Window.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::Uri>::_Emplace_back_with_unused_capacity<winrt::Windows::Foundation::Uri const &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    *(winrt::Windows::Foundation::IUnknown **)(a1 + 8),
    a2);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
