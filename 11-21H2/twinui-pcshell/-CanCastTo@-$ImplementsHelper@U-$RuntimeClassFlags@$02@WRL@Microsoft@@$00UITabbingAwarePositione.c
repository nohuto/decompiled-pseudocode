/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UITransitionStateChangeHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800801D8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UIFullScreenPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UITransitionStateChangeHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080470 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180080470.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,ITransitionStateChangeHandler,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // r11

  if ( InlineIsEqualGUID(a2, &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_ee010e17_919a_4068_868b_675acf787303)
      || InlineIsEqualGUID(v5, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270)
      || InlineIsEqualGUID(v9, &GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f)
      || InlineIsEqualGUID(v10, &GUID_727f9e97_76ee_497b_a942_b6371328485c)
      || InlineIsEqualGUID(v11, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e)
      || InlineIsEqualGUID(v12, &GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8)
      || InlineIsEqualGUID(v13, &GUID_5ec05508_a594_4da2_9999_16c34bd9808f)
      || InlineIsEqualGUID(v14, &GUID_0d772b29_0f8e_42f2_b679_2f71c58e6d21) )
    {
      *v6 = v8;
    }
    else if ( InlineIsEqualGUID(v15, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
    {
      *v16 = v17 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
