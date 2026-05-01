/*
 * XREFs of _CShellSnapComponent::GetAndDeleteSnapLaunchRect_::_1_::catch$16 @ 0x180221F55
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellSnapComponent::GetAndDeleteSnapLaunchRect_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x3F2,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           a4);
  return 0LL;
}
