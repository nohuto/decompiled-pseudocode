/*
 * XREFs of _TaskViewHost::VirtualDesktopDestroyBegin_::_1_::catch$1 @ 0x1805FEE1C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewHost::VirtualDesktopDestroyBegin_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x19A,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           a4);
  return 0LL;
}
