/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_InitCoro$2 @ 0x1801E81C0
 * Callers:
 *     ?DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1801E8478 (-DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfi.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_ResumeCoro$1 @ 0x1801E8280 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Resu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 209) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 208) = 0;
  return winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__ResumeCoro_1(a2);
}
