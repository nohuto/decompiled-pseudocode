/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_InitCoro$2 @ 0x1801E84DC
 * Callers:
 *     ?ShowContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1801E8788 (-ShowContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_ResumeCoro$1 @ 0x1801E8590 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_ResumeC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 209) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 208) = 0;
  return winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__ResumeCoro_1(a2);
}
