/*
 * XREFs of _TouchEdgeGestureManager::ShowTouchEdgeGripper_::_1_::catch$1 @ 0x18064D9C1
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchEdgeGestureManager::ShowTouchEdgeGripper_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x44,
                            (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                            a4);
  return 0LL;
}
