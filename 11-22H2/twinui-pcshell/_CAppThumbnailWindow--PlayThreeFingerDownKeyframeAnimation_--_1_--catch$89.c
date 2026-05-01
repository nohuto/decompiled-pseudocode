/*
 * XREFs of _CAppThumbnailWindow::PlayThreeFingerDownKeyframeAnimation_::_1_::catch$89 @ 0x180559FAC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerDownKeyframeAnimation_::_1_::catch_89(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 136) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x2D6,
                            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                            a4);
  return 0LL;
}
