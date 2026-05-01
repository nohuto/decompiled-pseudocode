/*
 * XREFs of _ApplicationFlyoutView::TryShowHideWindow_::_1_::catch$1 @ 0x1806C669E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationFlyoutView::TryShowHideWindow_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x153,
    (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
    a4);
  return 0LL;
}
