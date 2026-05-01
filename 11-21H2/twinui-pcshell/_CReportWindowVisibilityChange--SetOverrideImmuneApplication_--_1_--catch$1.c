/*
 * XREFs of _CReportWindowVisibilityChange::SetOverrideImmuneApplication_::_1_::catch$1 @ 0x1802E7F07
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CReportWindowVisibilityChange::SetOverrideImmuneApplication_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x7B,
                           (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
                           a4);
  return 0LL;
}
