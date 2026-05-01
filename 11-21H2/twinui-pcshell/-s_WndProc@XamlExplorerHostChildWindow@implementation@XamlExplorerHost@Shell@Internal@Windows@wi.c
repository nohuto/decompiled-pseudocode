/*
 * XREFs of ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804236A0
 * Callers:
 *     <none>
 * Callees:
 *     DefSubclassProc @ 0x1802DAC30 (DefSubclassProc.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180423758 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::s_WndProc(
        HWND hWnd,
        signed __int64 uMsg,
        WPARAM a3,
        LPARAM a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  UINT v6; // r11d
  unsigned __int64 v7; // rax
  bool v8; // zf
  signed __int64 v9; // rax
  LRESULT v10; // rbx
  unsigned __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = uMsg;
  v7 = 0LL;
  v12[0] = 0LL;
  if ( a6 )
  {
    v12[0] = a6;
    uMsg = *(_QWORD *)(a6 + 8);
    while ( uMsg >= 0 )
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a6 + 8), uMsg + 1, uMsg);
      v8 = uMsg == v9;
      uMsg = v9;
      if ( v8 )
        goto LABEL_7;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * uMsg + 24), 1u);
LABEL_7:
    if ( v6 == 33 && (*(_BYTE *)(a6 + 92) & 1) != 0 )
      v10 = 3LL;
    else
      v10 = DefSubclassProc(hWnd, v6, a3, a4);
    v7 = v12[0];
  }
  else
  {
    v10 = 0LL;
  }
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::unconditional_release_ref(
      v12,
      uMsg);
  return v10;
}
