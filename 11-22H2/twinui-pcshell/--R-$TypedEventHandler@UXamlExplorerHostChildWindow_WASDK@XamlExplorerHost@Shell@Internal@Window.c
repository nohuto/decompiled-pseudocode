/*
 * XREFs of ??R?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@23@AEBUIInspectable@123@@Z @ 0x1804F8918
 * Callers:
 *     ??$invoke@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@34@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@4@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@41@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@1@@Z @ 0x1804F86FC (--$invoke@U-$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Interna.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_0b2f23dace42994d9c64a9b3f9204eba_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1804F8ED0 (-Invoke@-$delegate@U-$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shel.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
