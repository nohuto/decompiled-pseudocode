/*
 * XREFs of _SharedDesktopBackgroundVisualHost::CreateXamlHost_::_1_::catch$166 @ 0x1806E7632
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SharedDesktopBackgroundVisualHost::CreateXamlHost_::_1_::catch_166(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 648),
                           (void *)0x228,
                           (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
                           a4);
  return 0LL;
}
