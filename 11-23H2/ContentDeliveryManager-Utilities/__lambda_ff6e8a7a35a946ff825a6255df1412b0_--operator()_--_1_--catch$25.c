/*
 * XREFs of __lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::catch$25 @ 0x1800D55D6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180038F04 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::catch_25(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x27C,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    a4);
  return 0LL;
}
