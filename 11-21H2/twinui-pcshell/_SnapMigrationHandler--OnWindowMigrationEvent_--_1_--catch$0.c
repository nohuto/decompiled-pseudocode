/*
 * XREFs of _SnapMigrationHandler::OnWindowMigrationEvent_::_1_::catch$0 @ 0x1805A8887
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapMigrationHandler::OnWindowMigrationEvent_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x41,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp",
    a4);
  return 0LL;
}
