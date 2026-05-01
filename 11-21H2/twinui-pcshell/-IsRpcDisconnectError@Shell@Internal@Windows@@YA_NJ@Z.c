/*
 * XREFs of ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x18057BC70
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc_::_1_::catch$0 @ 0x180214B25 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--v_WndProc_--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab_::_1_::catch$0 @ 0x18057C714 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SwitchToTab_--_1_--catch$0.c)
 *     ?IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1805BD9C0 (-IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z.c)
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
