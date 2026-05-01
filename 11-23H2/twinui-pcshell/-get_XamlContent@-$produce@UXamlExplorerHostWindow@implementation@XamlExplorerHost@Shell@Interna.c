/*
 * XREFs of ?get_XamlContent@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1802D9BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1804FA3F0 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@_ea_1804FA3F0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_XamlContent(
        __int64 a1,
        HRESULT (__stdcall **a2)(IInspectable *This, const IID *const riid, void **ppvObject))
{
  struct IInspectable v3; // rax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3.lpVtbl = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlContent((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)((a1 - 8) & -(__int64)(a1 != 0))).lpVtbl;
  QueryInterface = v3.lpVtbl->QueryInterface;
  v3.lpVtbl->QueryInterface = 0LL;
  *a2 = QueryInterface;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
