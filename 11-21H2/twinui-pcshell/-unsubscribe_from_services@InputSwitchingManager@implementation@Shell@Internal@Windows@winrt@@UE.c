/*
 * XREFs of ?unsubscribe_from_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2870
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x1800F6834 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShell.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1800F68C0 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@_ea_1800F68C0.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801616EC (--4-$com_ptr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@winrt@@QEAAAEAU01@$$QEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rdi
  int v4; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v7; // [rsp+30h] [rbp+10h] BYREF

  v2 = (char *)this + 168;
  if ( *((_QWORD *)this + 21) )
  {
    a2 = (struct IServiceProvider *)*((_QWORD *)this + 31);
    if ( a2 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 72LL))(*((_QWORD *)this + 22));
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCF,
          (unsigned int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
          (const char *)(unsigned int)v4,
          savedregs);
      *((_QWORD *)this + 31) = 0LL;
    }
  }
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ(
    (char *)this + 208,
    a2);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ((char *)this + 224);
  v7 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 200, &v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (char *)this + 280,
    0LL);
  v7 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 256, &v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (char *)this + 288,
    0LL);
  v7 = 0LL;
  winrt::com_ptr<Windows::Internal::Shell::Experience::IBaseExperienceManager>::operator=((char *)this + 176, &v7);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  v7 = 0LL;
  winrt::com_ptr<Windows::Internal::Shell::Experience::IBaseExperienceManager>::operator=(v2, &v7);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
}
