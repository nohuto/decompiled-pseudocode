/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801BCDE8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18001B0B4 (--1-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 56) + 16LL;
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>::~com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>(*(_QWORD **)(a2 + 120));
}
