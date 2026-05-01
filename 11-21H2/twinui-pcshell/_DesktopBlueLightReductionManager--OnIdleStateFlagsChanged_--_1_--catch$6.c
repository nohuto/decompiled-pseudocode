/*
 * XREFs of _DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::catch$6 @ 0x18022089E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x14E,
                            (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                            a4);
  return 0LL;
}
