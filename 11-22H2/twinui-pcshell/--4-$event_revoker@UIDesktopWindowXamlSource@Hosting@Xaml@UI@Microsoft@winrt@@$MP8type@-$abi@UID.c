/*
 * XREFs of ??4?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800532A0
 * Callers:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1800530D4 (-TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 * Callees:
 *     ??1?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18005359C (--1-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@-$abi@UID.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall __4__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v3 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v9 = v3;
  v8 = v4;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v7, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v9);
  if ( v9 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8;
  v8 = v5;
  __1__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAA_XZ(&v7);
  return a1;
}
