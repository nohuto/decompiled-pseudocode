/*
 * XREFs of _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::_parameters_ @ 0x18049A130
 * Callers:
 *     CMultitaskingViewManager::DismissRequested$_InitCoro$2 @ 0x1801B1E6C (CMultitaskingViewManager--DismissRequested$_InitCoro$2.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1801B23B8 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::_parameters_(
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
