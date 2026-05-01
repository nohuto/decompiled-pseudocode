/*
 * XREFs of ?put_XamlContent@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1804FCA10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x1804FC0B0 (-XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int_ea_1804FC0B0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>::put_XamlContent(
        __int64 a1,
        struct IInspectableVtbl *a2)
{
  __int64 result; // rax
  struct IInspectable v3; // [rsp+20h] [rbp-18h] BYREF

  v3.lpVtbl = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlContent(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)((a1 - 8) & -(__int64)(a1 != 0)),
    &v3);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v3.lpVtbl) = *winrt::to_hresult(&v3);
      result = LODWORD(v3.lpVtbl);
      continue;
    }
    break;
  }
  return result;
}
