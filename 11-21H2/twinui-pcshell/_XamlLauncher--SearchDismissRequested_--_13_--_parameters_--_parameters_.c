/*
 * XREFs of _XamlLauncher::SearchDismissRequested_::_13_::_parameters_::_parameters_ @ 0x1801AA124
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_InitCoro$2 @ 0x1801AAD50 (XamlLauncher--LauncherDismissRequested$_InitCoro$2.c)
 *     XamlLauncher::SearchDismissRequested$_InitCoro$2 @ 0x1801ABC4C (XamlLauncher--SearchDismissRequested$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall XamlLauncher::SearchDismissRequested_::_13_::_parameters_::_parameters_(
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
