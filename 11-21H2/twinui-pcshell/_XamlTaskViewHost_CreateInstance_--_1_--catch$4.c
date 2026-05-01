/*
 * XREFs of _XamlTaskViewHost_CreateInstance_::_1_::catch$4 @ 0x18021AF04
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlTaskViewHost_CreateInstance_::_1_::catch_4(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x23D,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           a4);
  return 0LL;
}
