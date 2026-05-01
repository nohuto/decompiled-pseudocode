/*
 * XREFs of _StartupAppMonitor::StartMonitor_::_1_::catch$95 @ 0x18063FBE4
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall StartupAppMonitor::StartMonitor_::_1_::catch_95(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 664),
    (void *)0xA9,
    (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
    a4);
  return 0LL;
}
