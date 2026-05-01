/*
 * XREFs of _CloseWinRTApplicationView_::_1_::catch$6 @ 0x1806276E7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CloseWinRTApplicationView_::_1_::catch_6(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x12,
    (int)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
    a4);
  return 0LL;
}
