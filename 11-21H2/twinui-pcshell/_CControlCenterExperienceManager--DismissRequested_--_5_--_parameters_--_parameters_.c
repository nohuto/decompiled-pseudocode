/*
 * XREFs of _CControlCenterExperienceManager::DismissRequested_::_5_::_parameters_::_parameters_ @ 0x180353044
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x180194B10 (CControlCenterExperienceManager--DismissRequested$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CControlCenterExperienceManager::DismissRequested_::_5_::_parameters_::_parameters_(
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
