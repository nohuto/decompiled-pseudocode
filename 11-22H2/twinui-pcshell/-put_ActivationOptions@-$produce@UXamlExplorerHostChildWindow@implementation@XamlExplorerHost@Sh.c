/*
 * XREFs of ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHI@Z @ 0x1804F80E0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubclass @ 0x18039100C (SetWindowSubclass.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::put_ActivationOptions(
        __int64 a1,
        int a2,
        UINT_PTR a3)
{
  DWORD_PTR v3; // rcx
  __int64 result; // rax
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    *(_DWORD *)(v3 + 92) = a2;
    if ( !*(_BYTE *)(v3 + 88) )
    {
      *(_BYTE *)(v3 + 88) = 1;
      SetWindowSubclass(
        *(HWND *)(v3 + 64),
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::s_WndProc,
        a3,
        v3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v5);
  }
  return result;
}
