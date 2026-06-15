/*
 * XREFs of _GetClsidsFromVar_::_1_::catch$4 @ 0x14006105D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140061098 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetClsidsFromVar_::_1_::catch_4(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x9D,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
    a4);
  return 0LL;
}
