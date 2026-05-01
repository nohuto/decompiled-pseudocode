/*
 * XREFs of ?put_XamlContent@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FAFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x1800FAEC4 (-XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Inte_ea_1800FAEC4.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::put_XamlContent(
        __int64 a1,
        struct IInspectableVtbl *a2)
{
  struct IInspectable v3; // [rsp+38h] [rbp+10h] BYREF

  v3.lpVtbl = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlContent(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)((a1 - 16) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
