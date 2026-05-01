/*
 * XREFs of _CShellSnapComponent::RegisterSnapLaunch_::_1_::catch$5 @ 0x18022208B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellSnapComponent::RegisterSnapLaunch_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 104),
                           (void *)0x3DA,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           a4);
  return 0LL;
}
