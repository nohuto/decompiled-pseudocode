/*
 * XREFs of _SearchAppPositionerHelpers::ExtractMonitorInfo_::_1_::catch$18 @ 0x1801A4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchAppPositionerHelpers::ExtractMonitorInfo_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 312),
    (void *)0x49,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
    a4);
  return 0LL;
}
