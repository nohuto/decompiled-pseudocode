/*
 * XREFs of __lambda_4f6e55dd49ac94c28a6037e68643a924_::operator()_::_1_::catch$6 @ 0x180064AA3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F1350 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_4f6e55dd49ac94c28a6037e68643a924_::operator()_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x5C,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
                           a4);
  return 0LL;
}
