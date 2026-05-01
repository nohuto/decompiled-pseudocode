/*
 * XREFs of _CSplashScreen::OnViewRemoved_::_1_::catch$12 @ 0x18022297E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSplashScreen::OnViewRemoved_::_1_::catch_12(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x4E,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
    a4);
  return 0LL;
}
