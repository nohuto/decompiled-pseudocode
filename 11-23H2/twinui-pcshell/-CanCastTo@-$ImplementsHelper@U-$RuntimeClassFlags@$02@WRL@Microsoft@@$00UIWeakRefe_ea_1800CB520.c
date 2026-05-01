/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CB520
 * Callers:
 *     ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9F60 (-QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18065CF64 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_18065CF64.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab)
      || (unsigned int)InlineIsEqualGUID(v5, &GUID_5e9e5234_68b0_59eb_92a9_b3676447192b)
      || (unsigned int)InlineIsEqualGUID(v9, &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_af45af48_c813_4b64_943d_73f6be1b9fdc)
      || (unsigned int)InlineIsEqualGUID(v11, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0)
      || (unsigned int)InlineIsEqualGUID(v12, &GUID_0b40e4e6_2749_461f_9a84_29491c297f86)
      || (unsigned int)InlineIsEqualGUID(v13, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c)
      || (v8 += 8LL, *v14 == 1222485622)
      && v14[1] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
      && v14[2] == *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
      && v14[3] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4]
      || (v8 += 8LL, *v14 == -1717070075)
      && v14[1] == *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data2
      && v14[2] == *(_DWORD *)GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4
      && v14[3] == *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4[4]
      || (v8 += 8LL, *v14 == -1811144131)
      && v14[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && v14[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && v14[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      *v6 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
