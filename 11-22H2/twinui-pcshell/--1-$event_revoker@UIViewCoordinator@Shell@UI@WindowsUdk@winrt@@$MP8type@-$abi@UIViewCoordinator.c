/*
 * XREFs of ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180071EFC
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BHA@AA @ 0x180295220 (--_9type@-$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BHA@AA.c)
 */

void __fastcall __1__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ(
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
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IViewCoordinator>,
      &v3);
    v4 = v3;
    if ( v3 )
    {
       winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IViewCoordinator,void>::type::`vcall'{112,{flat}}(v3, a1[1]);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    }
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
