/*
 * XREFs of _ListenerWindow::WndProc_::_1_::catch$15 @ 0x18022158E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ListenerWindow::WndProc_::_1_::catch_15(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x48,
    (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
    a4);
  return 0LL;
}
