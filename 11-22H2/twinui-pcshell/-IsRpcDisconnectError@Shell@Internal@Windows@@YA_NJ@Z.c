/*
 * XREFs of ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1802E86AE
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc_::_1_::catch$0 @ 0x1802C03F0 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--v_WndProc_--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab_::_1_::catch$0 @ 0x18063C4DA (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SwitchToTab_--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab_::_1_::catch$1 @ 0x18063C5B7 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TearOutTab_--_1_--catch$1.c)
 *     ?IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1806972D0 (-IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::Shell::IsRpcDisconnectError(Windows::Internal::Shell *this)
{
  return (_DWORD)this == -2147023174
      || (_DWORD)this == -2147023170
      || (_DWORD)this == -2147417848
      || (_DWORD)this == -2147418105
      || (_DWORD)this == -2147418094;
}
