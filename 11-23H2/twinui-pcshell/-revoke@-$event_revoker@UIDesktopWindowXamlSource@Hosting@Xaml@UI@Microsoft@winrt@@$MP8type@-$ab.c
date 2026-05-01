/*
 * XREFs of ?revoke@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAXXZ @ 0x1804F94E8
 * Callers:
 *     ?remove_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1804F9490 (-remove_TakeFocusRequested@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo.c)
 * Callees:
 *     ?get@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@QEBA@XZ @ 0x1800535E4 (-get@-$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@3@@Z @ 0x180053658 (-revoke_impl@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall _revoke___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rax
  winrt::Windows::Foundation::IUnknown *v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *a1;
  v5 = 0LL;
  *a1 = 0LL;
  v4 = v1;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v5);
  v3 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::get(
                                                 &v4,
                                                 v6);
  _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_3__Z(
    (__int64)a1,
    v3);
  if ( v4 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v4);
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
}
