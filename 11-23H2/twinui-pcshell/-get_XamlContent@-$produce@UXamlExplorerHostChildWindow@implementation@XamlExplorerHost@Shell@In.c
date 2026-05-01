/*
 * XREFs of ?get_XamlContent@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18019D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x18019DA00 (-XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Inte_ea_18019DA00.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::get_XamlContent(
        __int64 a1,
        HRESULT (__stdcall **a2)(IInspectable *This, const IID *const riid, void **ppvObject))
{
  struct IInspectable v3; // rax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3.lpVtbl = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlContent((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)((a1 - 16) & -(__int64)(a1 != 0))).lpVtbl;
  QueryInterface = v3.lpVtbl->QueryInterface;
  v3.lpVtbl->QueryInterface = 0LL;
  *a2 = QueryInterface;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
