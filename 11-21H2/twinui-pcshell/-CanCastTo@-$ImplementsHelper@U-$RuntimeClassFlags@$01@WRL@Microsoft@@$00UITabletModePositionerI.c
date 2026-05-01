/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800809A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082B30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180082B30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerInternal,ITabletModePositionerPriv,IStartDismissalPolicy,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IImmersiveMonitorNotification,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerWindowingDelegationHandler,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r10
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  int *v14; // r9
  _QWORD *v15; // r10
  int v16; // ecx

  if ( InlineIsEqualGUID(a2, &GUID_a8e97fa4_540d_48a9_aac2_3b6140069a32)
    || InlineIsEqualGUID(v2, &GUID_ef2ef97b_ee1b_47a0_ad0c_8478ec6c722f)
    || InlineIsEqualGUID(v5, &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2)
    || InlineIsEqualGUID(v6, &GUID_ee010e17_919a_4068_868b_675acf787303)
    || InlineIsEqualGUID(v7, &GUID_727f9e97_76ee_497b_a942_b6371328485c)
    || InlineIsEqualGUID(v8, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e)
    || InlineIsEqualGUID(v9, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270)
    || InlineIsEqualGUID(v10, &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a)
    || InlineIsEqualGUID(v11, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
  {
    *v4 = v3;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(v12, &GUID_c59a7a3c_0676_4526_8192_5d0bf9b89b95) )
  {
    *v15 = v13;
    return 0LL;
  }
  else
  {
    v16 = *v14;
    if ( *v14 == 739526881
      && v14[1] == *(_DWORD *)&GUID_2c1448e1_7540_41b2_9b0d_188c012da2f1.Data2
      && v14[2] == *(_DWORD *)GUID_2c1448e1_7540_41b2_9b0d_188c012da2f1.Data4
      && v14[3] == *(_DWORD *)&GUID_2c1448e1_7540_41b2_9b0d_188c012da2f1.Data4[4] )
    {
      *v15 = v13 + 8;
      return 0LL;
    }
    else if ( v16 == -1059921953
           && v14[1] == *(_DWORD *)&GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8.Data2
           && v14[2] == *(_DWORD *)GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8.Data4
           && v14[3] == *(_DWORD *)&GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8.Data4[4] )
    {
      *v15 = v13 + 16;
      return 0LL;
    }
    else if ( v16 == 976065091
           && v14[1] == *(_DWORD *)&GUID_3a2d9243_f596_4510_885e_5bf2e01fc0ae.Data2
           && v14[2] == *(_DWORD *)GUID_3a2d9243_f596_4510_885e_5bf2e01fc0ae.Data4
           && v14[3] == *(_DWORD *)&GUID_3a2d9243_f596_4510_885e_5bf2e01fc0ae.Data4[4] )
    {
      *v15 = v13 + 24;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
}
