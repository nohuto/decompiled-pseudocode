/*
 * XREFs of __lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()_::_1_::catch$9 @ 0x1800F182C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044530 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 504),
                           (void *)0x69,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
                           a4);
  return 0LL;
}
