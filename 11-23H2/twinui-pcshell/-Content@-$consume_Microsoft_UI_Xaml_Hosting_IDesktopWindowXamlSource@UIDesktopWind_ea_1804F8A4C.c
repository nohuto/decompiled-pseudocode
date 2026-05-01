/*
 * XREFs of ?Content@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804F8A4C
 * Callers:
 *     ?XamlContent@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x1804F90C8 (-XamlContent@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shel_ea_1804F90C8.c)
 *     ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1804FC024 (-XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Content(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  result = a2;
  *a2 = v6;
  return result;
}
