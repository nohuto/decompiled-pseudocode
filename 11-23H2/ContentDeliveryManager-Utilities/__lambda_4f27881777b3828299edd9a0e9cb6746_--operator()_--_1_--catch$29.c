/*
 * XREFs of __lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::catch$29 @ 0x1800D8B97
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003F208 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::catch_29(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 40) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 616),
                           (void *)0x1A7,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           a4);
  return 0LL;
}
