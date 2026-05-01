/*
 * XREFs of _MiniSearchAppPositionerConfig::ExtractMonitorInfo_::_1_::catch$29 @ 0x1803AE8B4
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall MiniSearchAppPositionerConfig::ExtractMonitorInfo_::_1_::catch_29(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x61,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchapppositioner.cpp",
    a4);
  return 0LL;
}
