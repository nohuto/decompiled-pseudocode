/*
 * XREFs of _CReportWindowVisibilityChange::ClearOverrideImmuneApplication_::_1_::catch$13 @ 0x180398404
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x8D,
    (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
    a4);
  return 0LL;
}
