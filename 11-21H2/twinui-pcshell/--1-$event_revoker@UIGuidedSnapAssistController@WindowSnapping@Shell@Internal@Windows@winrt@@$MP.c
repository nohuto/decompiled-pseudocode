/*
 * XREFs of ??1?$event_revoker@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180169D68
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800F5570 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$20 @ 0x1802173A7 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802173A7.c)
 *     ??1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180588FC0 (--1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BFA@AA @ 0x18020E8C0 (--_9type@-$abi@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@X@impl@.c)
 */

void __fastcall __1__event_revoker_UIGuidedSnapAssistController_WindowSnapping_Shell_Internal_Windows_winrt___MP8type___abi_UIGuidedSnapAssistController_WindowSnapping_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>,
      &v3);
    v4 = v3;
    if ( v3 )
    {
       winrt::impl::abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController,void>::type::`vcall'{80,{flat}}(
        v3,
        a1[1]);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    }
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
