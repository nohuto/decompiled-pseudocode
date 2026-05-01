/*
 * XREFs of ?HasFocus@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004F304
 * Callers:
 *     ?SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18004F11C (-SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windo.c)
 *     ?get_HasFocus@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x18004F2A0 (-get_HasFocus@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell.c)
 *     ?ClearFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1804F89B8 (-ClearFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  v4[0] = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 64LL))(v1, v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4[0];
}
