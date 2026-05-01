/*
 * XREFs of ??1?$event_revoker@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1806E19F0
 * Callers:
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x1806E1B6C (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 *     _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$16 @ 0x1806E6A81 (_SharedDesktopBackgroundVisualHost--SharedDesktopBackgroundVisualHost_--_1_--dtor$16.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 *     _SharedDesktopBackgroundVisualHost::CreateXamlHost_::_1_::dtor$6 @ 0x1806E75BA (_SharedDesktopBackgroundVisualHost--CreateXamlHost_--_1_--dtor$6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BGA@AA @ 0x1802AC6D0 (--_9type@-$abi@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BGA@AA.c)
 */

void __fastcall __1__event_revoker_UIDesktopVisualExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDesktopVisualExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ(
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
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IDesktopVisualExtension>,
      &v3);
    v4 = v3;
    if ( v3 )
    {
       winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IDesktopVisualExtension,void>::type::`vcall'{96,{flat}}(v3);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    }
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
