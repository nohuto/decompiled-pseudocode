/*
 * XREFs of _MiniSearchExperienceManager::LauncherShowRequested_::_20_::_parameters_::_parameters_ @ 0x1803A0DC0
 * Callers:
 *     MiniSearchExperienceManager::LauncherShowRequested$_InitCoro$2 @ 0x1801A7A2C (MiniSearchExperienceManager--LauncherShowRequested$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiniSearchExperienceManager::LauncherShowRequested_::_20_::_parameters_::_parameters_(
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
