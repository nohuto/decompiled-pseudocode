/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::catch$63 @ 0x1802C28CD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::catch_63(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 320) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 312),
                            (void *)0x231,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            a4);
  return 0LL;
}
