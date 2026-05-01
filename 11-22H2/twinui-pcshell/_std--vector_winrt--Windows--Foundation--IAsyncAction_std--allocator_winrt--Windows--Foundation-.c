/*
 * XREFs of _std::vector_winrt::Windows::Foundation::IAsyncAction_std::allocator_winrt::Windows::Foundation::IAsyncAction___::_Emplace_reallocate_winrt::Windows::Foundation::IAsyncAction__::_1_::catch$3 @ 0x1806C6E56
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6B98 (--$_Destroy_range@V-$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsync.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Foundation::IAsyncAction_std::allocator_winrt::Windows::Foundation::IAsyncAction___::_Emplace_reallocate_winrt::Windows::Foundation::IAsyncAction__::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IAsyncAction>>(
    *(winrt::Windows::Foundation::IUnknown **)(a2 + 112),
    *(winrt::Windows::Foundation::IUnknown **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
