/*
 * XREFs of ?put_IsVisible@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x1801A9810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::put_IsVisible(
        __int64 a1,
        char a2)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = a1 + 48;
  if ( !a1 )
    v2 = 64LL;
  if ( a2 )
    v3 = 8;
  else
    v3 = 0;
  ShowWindow(*(HWND *)v2, v3);
  return 0LL;
}
