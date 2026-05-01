/*
 * XREFs of __lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()_::_1_::catch$2 @ 0x1801A48DA
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x24,
    (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartSearchSharedUtils.h",
    a4);
  return 0LL;
}
