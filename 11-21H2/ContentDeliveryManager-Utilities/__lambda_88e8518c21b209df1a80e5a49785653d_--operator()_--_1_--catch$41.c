/*
 * XREFs of __lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::catch$41 @ 0x1800EE5FB
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::catch_41(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x273,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    a4);
  return 0LL;
}
