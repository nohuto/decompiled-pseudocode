/*
 * XREFs of ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHI@Z @ 0x1804233B0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubclass @ 0x1802DAF94 (SetWindowSubclass.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::put_ActivationOptions(
        __int64 a1,
        LRESULT (__stdcall *a2)(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData),
        UINT_PTR a3)
{
  DWORD_PTR v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    *(_DWORD *)(v3 + 92) = (_DWORD)a2;
    if ( !*(_BYTE *)(v3 + 88) )
    {
      *(_BYTE *)(v3 + 88) = 1;
      SetWindowSubclass(*(HWND *)(v3 + 64), a2, a3, v3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
