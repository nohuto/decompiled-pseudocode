/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1801B2930
 * Callers:
 *     ?ShowRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801B33D8 (-ShowRequested@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEv.c)
 * Callees:
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_ @ 0x1801B1A84 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher_--_29_--_parameters_--_parameters.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1801B2A20 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ShowRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_(
    (_DWORD *)((char *)a2 + 1585),
    a5,
    a4);
  *(_QWORD *)a2 = CMultitaskingViewManager::ShowRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 1584) = 0;
  return CMultitaskingViewManager::ShowRequested__ResumeCoro_1(a2);
}
