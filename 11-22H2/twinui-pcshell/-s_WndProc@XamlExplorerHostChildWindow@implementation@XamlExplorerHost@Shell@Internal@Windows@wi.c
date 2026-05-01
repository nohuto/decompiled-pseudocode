/*
 * XREFs of ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804F8430
 * Callers:
 *     <none>
 * Callees:
 *     DefSubclassProc @ 0x180390CA8 (DefSubclassProc.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1804F8550 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::s_WndProc(
        HWND hWnd,
        signed __int64 uMsg,
        WPARAM wParam,
        LPARAM lParam,
        UINT_PTR uIdSubclass,
        DWORD_PTR dwRefData)
{
  UINT v6; // r11d
  DWORD_PTR v7; // rax
  bool v8; // zf
  signed __int64 v9; // rax
  LRESULT v10; // rbx
  DWORD_PTR v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = uMsg;
  v7 = 0LL;
  v12[0] = 0LL;
  if ( dwRefData )
  {
    v12[0] = dwRefData;
    uMsg = *(_QWORD *)(dwRefData + 8);
    while ( uMsg >= 0 )
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(dwRefData + 8), uMsg + 1, uMsg);
      v8 = uMsg == v9;
      uMsg = v9;
      if ( v8 )
        goto LABEL_7;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * uMsg + 24), 1u);
LABEL_7:
    if ( v6 == 33 && (*(_BYTE *)(dwRefData + 92) & 1) != 0 )
      v10 = 3LL;
    else
      v10 = DefSubclassProc(hWnd, v6, wParam, lParam);
    v7 = v12[0];
  }
  else
  {
    v10 = 0LL;
  }
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::unconditional_release_ref(
      v12,
      uMsg,
      wParam,
      lParam);
  return v10;
}
