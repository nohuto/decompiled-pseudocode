/*
 * XREFs of _CAppThumbnailWindow::Initialize_::_1_::catch$5 @ 0x18049D11F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::Initialize_::_1_::catch_5(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 224) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 216),
                            (void *)0x7F,
                            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                            a4);
  return 0LL;
}
