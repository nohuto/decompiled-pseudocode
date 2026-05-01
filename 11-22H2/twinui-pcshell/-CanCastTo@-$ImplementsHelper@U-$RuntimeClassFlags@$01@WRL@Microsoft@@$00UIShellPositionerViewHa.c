/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CA138
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIVoiceAssistantPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF9D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800CF9D0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IInputHostLayoutChanges,IAppSwitcherNotification,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int IsEqualGUID; // eax
  __int64 v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // r11

  if ( *a2 == -301920745
    && a2[1] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
    && a2[2] == *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4
    && a2[3] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270);
    v7 = 0;
    if ( IsEqualGUID
      || (unsigned int)InlineIsEqualGUID(v4, &GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e)
      || (unsigned int)InlineIsEqualGUID(v8, &GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6)
      || (unsigned int)InlineIsEqualGUID(v9, &GUID_727f9e97_76ee_497b_a942_b6371328485c)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc) )
    {
      *v5 = v6;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
    {
      *v12 = v13 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
