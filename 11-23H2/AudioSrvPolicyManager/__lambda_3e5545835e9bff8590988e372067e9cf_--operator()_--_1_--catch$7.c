/*
 * XREFs of __lambda_3e5545835e9bff8590988e372067e9cf_::operator()_::_1_::catch$7 @ 0x180049884
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027C18 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_3e5545835e9bff8590988e372067e9cf_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x5AD,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    a4);
  return 0LL;
}
