/*
 * XREFs of _CTopLevelWindow3D::StopAnimation_::_1_::catch$17 @ 0x180067C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E7654 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation_::_1_::catch_17(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 408),
    (void *)0x84E,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    a4);
  return 0LL;
}
