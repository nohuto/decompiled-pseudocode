/*
 * XREFs of __lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f_::operator()_::_1_::catch$21 @ 0x18055B0D1
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_e7cb1c7feb0aed16ae3583cdaaa2b92f_::operator()_::_1_::catch_21(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x60,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
    a4);
  return 0LL;
}
