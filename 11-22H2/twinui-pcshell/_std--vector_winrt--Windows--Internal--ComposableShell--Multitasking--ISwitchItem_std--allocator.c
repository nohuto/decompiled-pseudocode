/*
 * XREFs of _std::vector_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_std::allocator_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::_Emplace_reallocate_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_const_&__::_1_::catch$2 @ 0x18078AD36
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078ABE0 (--$_Destroy_range@V-$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_std::allocator_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::_Emplace_reallocate_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_const____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
    *(winrt::Windows::Foundation::IUnknown **)(a2 + 112),
    *(winrt::Windows::Foundation::IUnknown **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
