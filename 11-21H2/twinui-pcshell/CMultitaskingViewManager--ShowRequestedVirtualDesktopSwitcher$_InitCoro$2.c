/*
 * XREFs of CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1801B3458
 * Callers:
 *     ?ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801B3F10 (-ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@USh.c)
 * Callees:
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_ @ 0x1801B1A84 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher_--_29_--_parameters_--_parameters.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1801B3550 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_(
    (_DWORD *)((char *)a2 + 1393),
    a5,
    a4);
  *(_QWORD *)a2 = CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 1392) = 0;
  return CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1(a2);
}
