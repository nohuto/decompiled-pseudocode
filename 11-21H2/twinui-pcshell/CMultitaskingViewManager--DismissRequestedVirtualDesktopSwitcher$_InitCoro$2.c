/*
 * XREFs of CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1801B23B8
 * Callers:
 *     ?DismissRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801B28B0 (-DismissRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@.c)
 * Callees:
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1801B24B0 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::_parameters_ @ 0x18049A130 (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--_paramet.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::_parameters_(a2 + 529, a5, a4);
  *(_QWORD *)a2 = CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 528) = 0;
  return CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1(a2);
}
