/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_13_::_parameters_::_parameters_ @ 0x1801C3F40
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_InitCoro$2 @ 0x1801C6114 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_InitCo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_13_::_parameters_::_parameters_(
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
