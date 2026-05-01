/*
 * XREFs of ?_Change_array@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@_K1@Z @ 0x18067D7C8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x180678B94 (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU12345@AEAV?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@0@@Z @ 0x18065E504 (--$_Destroy_range@V-$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@Y.c)
 */

__int64 __fastcall std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Windows::Internal::Shell::RegistrationData *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>>(
      v6,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
