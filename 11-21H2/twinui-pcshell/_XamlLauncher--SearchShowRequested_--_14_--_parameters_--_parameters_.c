/*
 * XREFs of _XamlLauncher::SearchShowRequested_::_14_::_parameters_::_parameters_ @ 0x18044A490
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x1801AB2D8 (XamlLauncher--LauncherShowRequested$_InitCoro$2.c)
 *     XamlLauncher::SearchShowRequested$_InitCoro$2 @ 0x1801AC350 (XamlLauncher--SearchShowRequested$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall XamlLauncher::SearchShowRequested_::_14_::_parameters_::_parameters_(
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
