/*
 * XREFs of _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_11_::_parameters_::_parameters_ @ 0x1802DFEE8
 * Callers:
 *     CMultitaskingViewManager::DismissRequested$_InitCoro$2 @ 0x18020E4DC (CMultitaskingViewManager--DismissRequested$_InitCoro$2.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18020E960 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_11_::_parameters_::_parameters_(
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
