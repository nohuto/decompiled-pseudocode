/*
 * XREFs of __lambda_e618d2e1a4350f330cc93ddf3d982686_::operator()_::_1_::catch$1 @ 0x18025043E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_e618d2e1a4350f330cc93ddf3d982686_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x2CC,
    (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  return 0LL;
}
