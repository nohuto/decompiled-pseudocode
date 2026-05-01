/*
 * XREFs of ?remove_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1804F9490
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1804F92D0 (-remove@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@I.c)
 *     ?revoke@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAXXZ @ 0x1804F94E8 (-revoke@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@-$ab.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK>::remove_TakeFocusRequested(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a1 + 80;
  if ( !a1 )
    v3 = 96LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>>::remove(
    v3,
    a2);
  if ( !*(_QWORD *)v3 )
  {
    v4 = a1 + 32;
    if ( !a1 )
      v4 = 48LL;
    _revoke___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAAXXZ(v4);
  }
  return 0LL;
}
