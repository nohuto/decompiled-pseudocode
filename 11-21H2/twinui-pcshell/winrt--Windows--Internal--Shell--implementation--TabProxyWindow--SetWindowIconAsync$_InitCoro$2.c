/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$2 @ 0x1801BB918
 * Callers:
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801BC534 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x1801BB9D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 1185) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[1184] = 0;
  return winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_1(a2);
}
