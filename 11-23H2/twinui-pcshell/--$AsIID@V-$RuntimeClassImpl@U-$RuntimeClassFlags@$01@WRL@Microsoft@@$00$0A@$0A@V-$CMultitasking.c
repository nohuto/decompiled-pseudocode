/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001549C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015490 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // r9
  int v17; // ebx

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_389221b7_bf28_4d25_9501_b4491d822be1)
      || (unsigned int)InlineIsEqualGUID(v6, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
    {
      goto LABEL_11;
    }
    if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270) )
    {
      *v11 = v12 + 8;
      v17 = 0;
      v8 = v12 + 8;
      goto LABEL_12;
    }
    if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839) )
    {
LABEL_11:
      *v7 = v8;
      v17 = 0;
      goto LABEL_12;
    }
    if ( !(unsigned int)InlineIsEqualGUID(v13, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e) )
    {
      if ( !(unsigned int)InlineIsEqualGUID(v14, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade) )
      {
        v17 = -2147467262;
        v8 = 0LL;
        goto LABEL_9;
      }
      v8 = v16 + 8;
    }
    *v15 = v8;
    v17 = 0;
LABEL_9:
    if ( v17 < 0 )
      return (unsigned int)v17;
LABEL_12:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v17;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
