/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180080860
 * Callers:
 *     ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007FB50 (-QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18059260C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_18059260C.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(
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
  _DWORD *v13; // r9

  if ( !InlineIsEqualGUID(a2, &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab)
    && !InlineIsEqualGUID(v2, &GUID_e5ceae46_b0f6_58d0_973f_94cc1a45d50e)
    && !InlineIsEqualGUID(v5, &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6)
    && !InlineIsEqualGUID(v6, &GUID_af45af48_c813_4b64_943d_73f6be1b9fdc)
    && !InlineIsEqualGUID(v7, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0)
    && !InlineIsEqualGUID(v8, &GUID_0b40e4e6_2749_461f_9a84_29491c297f86)
    && !InlineIsEqualGUID(v9, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c)
    && !InlineIsEqualGUID(v10, &GUID_f4e04660_602b_47e3_ac2f_55267d52ca95)
    && !InlineIsEqualGUID(v11, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc)
    && !InlineIsEqualGUID(v12, &GUID_99a79705_bfc0_4c43_be58_a929322ee203) )
  {
    v3 += 8LL;
    if ( *v13 != -1811144131
      || v13[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      || v13[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      || v13[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      return 2147500034LL;
    }
  }
  *v4 = v3;
  return 0LL;
}
