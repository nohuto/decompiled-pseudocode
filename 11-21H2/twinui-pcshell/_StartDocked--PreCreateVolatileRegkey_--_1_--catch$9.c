/*
 * XREFs of _StartDocked::PreCreateVolatileRegkey_::_1_::catch$9 @ 0x180217638
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall StartDocked::PreCreateVolatileRegkey_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x1D,
    (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartDockedHelpers.h",
    a4);
  return 0LL;
}
