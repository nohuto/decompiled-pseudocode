/*
 * XREFs of _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_ @ 0x1801B1A84
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1801B2930 (CMultitaskingViewManager--ShowRequested$_InitCoro$2.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1801B3458 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax

  *a1 = a2;
  v3 = *a3;
  *a3 = 0LL;
  a1[1] = v3;
  return a1;
}
