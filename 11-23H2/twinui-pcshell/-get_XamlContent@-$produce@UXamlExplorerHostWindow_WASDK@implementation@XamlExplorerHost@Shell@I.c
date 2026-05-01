/*
 * XREFs of ?get_XamlContent@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804FC6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1804FC024 (-XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>::get_XamlContent(
        __int64 a1,
        HRESULT (__stdcall **a2)(IInspectable *This, const IID *const riid, void **ppvObject))
{
  struct IInspectable v3; // rax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3.lpVtbl = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlContent(
                (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)((a1 - 8) & -(__int64)(a1 != 0)),
                &v6).lpVtbl;
  QueryInterface = v3.lpVtbl->QueryInterface;
  v3.lpVtbl->QueryInterface = 0LL;
  *a2 = QueryInterface;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
