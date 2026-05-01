/*
 * XREFs of _std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId___::_Emplace_reallocate_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_const_&__::_1_::catch$0 @ 0x18059ADF7
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId___::_Emplace_reallocate_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
