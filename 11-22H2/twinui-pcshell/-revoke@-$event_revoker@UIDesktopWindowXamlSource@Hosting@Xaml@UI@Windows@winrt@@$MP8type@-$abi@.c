/*
 * XREFs of ?revoke@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAXXZ @ 0x1804F8378
 * Callers:
 *     ?remove_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1804F8320 (-remove_TakeFocusRequested@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1804F7ECC (-get@-$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@@Z @ 0x1804F83E8 (-revoke_impl@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-.c)
 */

__int64 __fastcall _revoke___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *a1;
  v6 = 0LL;
  *a1 = 0LL;
  v5 = v1;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v6);
  v3 = winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::get(&v5, v7);
  result = _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_3__Z(
             a1,
             v3);
  if ( v5 )
    result = winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
  if ( v6 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
  return result;
}
