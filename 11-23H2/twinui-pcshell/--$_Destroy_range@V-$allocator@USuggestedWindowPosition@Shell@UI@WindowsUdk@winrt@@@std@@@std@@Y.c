/*
 * XREFs of ??$_Destroy_range@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x18065E504
 * Callers:
 *     ??1?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@XZ @ 0x18065EF98 (--1-$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V-$allocator@USuggestedWindowPos.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     _std::vector_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition_std::allocator_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition___::_Emplace_reallocate_winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition_const_&__::_1_::catch$3 @ 0x180678CAA (_std--vector_winrt--WindowsUdk--UI--Shell--SuggestedWindowPosition_std--allocator_winrt--Windows.c)
 *     ??$_Uninitialized_move@PEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@0PEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x180678E98 (--$_Uninitialized_move@PEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V-$allocator@USugg.c)
 *     ?_Change_array@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@_K1@Z @ 0x18067D7C8 (-_Change_array@-$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V-$allocator@USugges.c)
 * Callees:
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

winrt::Windows::Internal::Shell::RegistrationData *__fastcall std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>>(
        winrt::Windows::Internal::Shell::RegistrationData *this,
        winrt::Windows::Internal::Shell::RegistrationData *a2)
{
  winrt::Windows::Internal::Shell::RegistrationData *v3; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'(v3);
      v3 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
  return result;
}
