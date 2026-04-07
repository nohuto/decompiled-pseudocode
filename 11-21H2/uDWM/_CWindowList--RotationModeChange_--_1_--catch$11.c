/*
 * XREFs of _CWindowList::RotationModeChange_::_1_::catch$11 @ 0x180105FFA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F1350 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::RotationModeChange_::_1_::catch_11(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x1CF7,
                           (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                           a4);
  return 0LL;
}
