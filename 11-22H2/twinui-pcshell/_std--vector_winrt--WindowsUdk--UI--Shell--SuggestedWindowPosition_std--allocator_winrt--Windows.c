/*
 * XREFs of _std::vector_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition_std::allocator_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition___::_Emplace_reallocate_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition_const_&__::_1_::catch$3 @ 0x180678CAA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x18065E504 (--$_Destroy_range@V-$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@Y.c)
 */

void __fastcall __noreturn std::vector_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition_std::allocator_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition___::_Emplace_reallocate_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>>(
    *(winrt::Windows::Internal::Shell::RegistrationData **)(a2 + 112),
    *(winrt::Windows::Internal::Shell::RegistrationData **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
