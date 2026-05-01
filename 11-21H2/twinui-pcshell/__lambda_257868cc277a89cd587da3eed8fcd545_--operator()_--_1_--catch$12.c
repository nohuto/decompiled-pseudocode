/*
 * XREFs of __lambda_257868cc277a89cd587da3eed8fcd545_::operator()_::_1_::catch$12 @ 0x1801BE9B3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_257868cc277a89cd587da3eed8fcd545_::operator()_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x2E6,
    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    a4);
  return 0LL;
}
