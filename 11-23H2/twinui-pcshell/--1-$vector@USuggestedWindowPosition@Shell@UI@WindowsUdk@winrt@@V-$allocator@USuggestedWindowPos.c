/*
 * XREFs of ??1?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@XZ @ 0x18065EF98
 * Callers:
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$5 @ 0x180662AD2 (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$5.c)
 *     _SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor$0 @ 0x18067A9FE (_SnapFlyoutHost--GetSuggestedWindowPositions_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x18065E504 (--$_Destroy_range@V-$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@Y.c)
 */

void __fastcall std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::~vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>>(
      v2,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
