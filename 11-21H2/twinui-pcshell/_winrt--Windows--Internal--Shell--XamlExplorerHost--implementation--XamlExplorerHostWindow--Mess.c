/*
 * XREFs of _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::MessageHandler_::_1_::catch$4 @ 0x1802148D2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::MessageHandler_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_QWORD *)(a2 + 56) = (int)wil::details::in1diag3::Return_CaughtException(
                                *(wil::details::in1diag3 **)(a2 + 88),
                                (void *)0x4F,
                                (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostislandwindow.cpp",
                                a4);
  return 0LL;
}
