/*
 * XREFs of _CFrameApplicationPresentation::SetAppTitlebarConfiguration_::_1_::catch$0 @ 0x1803C9E8F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppTitlebarConfiguration_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x5F0,
                           (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           a4);
  return 0LL;
}
