/*
 * XREFs of __lambda_1c9ff73393079898664ba9c0b1342f4a_::operator()_::_1_::catch$7 @ 0x18004AD14
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027E08 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_1c9ff73393079898664ba9c0b1342f4a_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x5AE,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    a4);
  return 0LL;
}
