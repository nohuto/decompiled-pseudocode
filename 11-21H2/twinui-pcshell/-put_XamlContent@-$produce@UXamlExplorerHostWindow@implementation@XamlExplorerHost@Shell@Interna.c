/*
 * XREFs of ?put_XamlContent@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x18001ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x18001ECF4 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::put_XamlContent(
        __int64 a1,
        struct IInspectableVtbl *a2)
{
  IInspectable v3; // [rsp+38h] [rbp+10h] BYREF

  v3.lpVtbl = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlContent(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)((a1 - 16) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
