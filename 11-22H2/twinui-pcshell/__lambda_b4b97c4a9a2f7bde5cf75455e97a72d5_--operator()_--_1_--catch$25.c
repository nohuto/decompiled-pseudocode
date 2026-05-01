/*
 * XREFs of __lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator()_::_1_::catch$25 @ 0x180237212
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator()_::_1_::catch_25(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x7F8,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    a4);
  return 0LL;
}
