/*
 * XREFs of __lambda_2547995382f4e95e159e6de1c858c05c_::operator()_::_1_::catch$10 @ 0x1800F2F9A
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_2547995382f4e95e159e6de1c858c05c_::operator()_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x24D,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
    a4);
  return 0LL;
}
