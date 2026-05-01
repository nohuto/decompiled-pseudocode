/*
 * XREFs of ?RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ @ 0x1801793B0
 * Callers:
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800E4958 (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

ATOM winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterClass(void)
{
  const char *v0; // r9
  WNDCLASSEXW v2; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId = RegisterWindowMessageW(L"TabSwitch");
    if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x71,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        v0);
  }
  memset_0(&v2, 0, sizeof(v2));
  v2.cbSize = 80;
  v2.lpfnWndProc = (WNDPROC)CWRLImpWndProc<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::s_WndProcBase;
  v2.hInstance = &_ImageBase;
  v2.lpszClassName = L"Windows.Internal.Shell.TabProxyWindow";
  v2.cbWndExtra = 8;
  return RegisterClassExW(&v2);
}
