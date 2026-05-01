/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E490
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FF7C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801FF7C0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FF7E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801FF7E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FF800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801FF800.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FF820 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801FF820.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r11
  _DWORD *v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  int v10; // eax

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( *v4 == 949100983 )
  {
    if ( v4[1] != *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data2
      || v4[2] != *(_DWORD *)GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4 )
    {
      goto LABEL_4;
    }
    v10 = *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4[4];
  }
  else
  {
    if ( *v4 != 1229475324
      || v4[1] != *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
      || v4[2] != *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4 )
    {
      goto LABEL_4;
    }
    v10 = *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4];
  }
  if ( v4[3] == v10 )
    goto LABEL_15;
LABEL_4:
  if ( *v4 == -1811144131
    && v4[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && v4[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && v4[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    *v3 = v5 + 8;
    goto LABEL_16;
  }
  if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839) )
  {
LABEL_15:
    *v3 = v5;
LABEL_16:
    v8 = 0;
LABEL_17:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
    return (unsigned int)v8;
  }
  v7 = v5 + 8;
  if ( *v6 == -2030348378
    && v6[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
    && v6[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
    && v6[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4]
    || (v7 = v5 + 16, *v6 == -851427758)
    && v6[1] == *(_DWORD *)&GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data2
    && v6[2] == *(_DWORD *)GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data4
    && v6[3] == *(_DWORD *)&GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data4[4] )
  {
    *v3 = v7;
    v8 = 0;
  }
  else
  {
    v8 = -2147467262;
  }
  if ( v8 >= 0 )
    goto LABEL_17;
  return (unsigned int)v8;
}
