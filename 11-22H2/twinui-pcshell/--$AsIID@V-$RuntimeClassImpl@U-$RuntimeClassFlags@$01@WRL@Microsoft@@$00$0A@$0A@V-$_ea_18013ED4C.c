/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18013ED4C
 * Callers:
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013EC9C (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013ED40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18013ED40.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013EE08 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1176114867
      && a2[1] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data2
      && a2[2] == *(_DWORD *)GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4
      && a2[3] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::CanCastTo(a1 + 8);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
