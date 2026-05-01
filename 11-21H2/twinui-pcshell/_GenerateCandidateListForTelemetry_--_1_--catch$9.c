/*
 * XREFs of _GenerateCandidateListForTelemetry_::_1_::catch$9 @ 0x1802324E6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GenerateCandidateListForTelemetry_::_1_::catch_9(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 344),
    (void *)0xB1,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
    a4);
  return 0LL;
}
