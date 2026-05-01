/*
 * XREFs of ??$_Uninitialized_move@PEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@0PEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x180678E98
 * Callers:
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x180678B94 (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x18065E504 (--$_Destroy_range@V-$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@Y.c)
 */

winrt::Windows::Internal::Shell::RegistrationData *__fastcall std::_Uninitialized_move<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Internal::Shell::RegistrationData *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>>(a3, a3);
  return a3;
}
