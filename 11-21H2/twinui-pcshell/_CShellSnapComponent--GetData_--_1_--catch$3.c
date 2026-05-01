/*
 * XREFs of _CShellSnapComponent::GetData_::_1_::catch$3 @ 0x1805934EE
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellSnapComponent::GetData_::_1_::catch_3(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x6E5,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    a4);
  return 0LL;
}
