/*
 * XREFs of _StartupAppMonitor::StartMonitor_::_1_::catch$96 @ 0x180580B73
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall StartupAppMonitor::StartMonitor_::_1_::catch_96(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 440),
    (void *)0xA9,
    (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
    a4);
  return 0LL;
}
