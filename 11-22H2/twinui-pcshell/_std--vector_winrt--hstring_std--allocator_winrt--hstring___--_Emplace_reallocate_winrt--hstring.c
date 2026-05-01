/*
 * XREFs of _std::vector_winrt::hstring_std::allocator_winrt::hstring___::_Emplace_reallocate_winrt::hstring_const_&__::_1_::catch$1 @ 0x1806F79E9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

void __fastcall __noreturn std::vector_winrt::hstring_std::allocator_winrt::hstring___::_Emplace_reallocate_winrt::hstring_const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::hstring>>(
    *(volatile signed __int32 ***)(a2 + 112),
    *(volatile signed __int32 ***)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 8LL * *(_QWORD *)(a2 + 32));
  throw;
}
