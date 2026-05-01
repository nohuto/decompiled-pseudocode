/*
 * XREFs of _KeyboardHosting::TabTipAdapter::OnShellHotKey_::_1_::catch$8 @ 0x1804771E6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0xA48,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    a4);
  return 0LL;
}
