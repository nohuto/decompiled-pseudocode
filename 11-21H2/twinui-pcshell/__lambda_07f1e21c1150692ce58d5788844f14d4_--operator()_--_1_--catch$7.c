/*
 * XREFs of __lambda_07f1e21c1150692ce58d5788844f14d4_::operator()_::_1_::catch$7 @ 0x1801C4B9B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_07f1e21c1150692ce58d5788844f14d4_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x592,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           a4);
  return 0LL;
}
