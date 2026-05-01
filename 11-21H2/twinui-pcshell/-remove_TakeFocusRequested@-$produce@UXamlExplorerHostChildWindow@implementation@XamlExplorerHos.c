/*
 * XREFs of ?remove_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1804235D0
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18042341C (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 *     ?revoke@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAXXZ @ 0x180423628 (-revoke@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-$abi@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::remove_TakeFocusRequested(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a1 + 80;
  if ( !a1 )
    v3 = 96LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
    v3,
    a2);
  if ( !*(_QWORD *)v3 )
  {
    v4 = a1 + 24;
    if ( !a1 )
      v4 = 40LL;
    _revoke___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAXXZ(v4);
  }
  return 0LL;
}
