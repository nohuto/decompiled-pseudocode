/*
 * XREFs of __lambda_44f2a899e44ce20919ad94180e8373fc_::operator()_::_1_::catch$7 @ 0x18042F7E7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_44f2a899e44ce20919ad94180e8373fc_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x48,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
    a4);
  return 0LL;
}
