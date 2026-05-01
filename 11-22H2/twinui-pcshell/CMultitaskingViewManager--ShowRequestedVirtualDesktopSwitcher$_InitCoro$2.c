/*
 * XREFs of CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18020F9DC
 * Callers:
 *     ?ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18021028C (-ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@USh.c)
 * Callees:
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_ @ 0x1805533E8 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher_--_29_--_parameters_--_parameters.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_(a2 + 177, a5, a4);
  *(_QWORD *)a2 = CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 176) = 0;
  return CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1(a2);
}
