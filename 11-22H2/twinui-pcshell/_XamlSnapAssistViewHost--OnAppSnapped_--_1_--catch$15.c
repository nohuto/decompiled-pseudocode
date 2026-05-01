/*
 * XREFs of _XamlSnapAssistViewHost::OnAppSnapped_::_1_::catch$15 @ 0x18076D199
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::OnAppSnapped_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x20B,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
    a4);
  return 0LL;
}
