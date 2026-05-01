/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1805927B4
 * Callers:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1805905B8 (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$_ea_1805905B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_e5ceae46_b0f6_58d0_973f_94cc1a45d50e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_af45af48_c813_4b64_943d_73f6be1b9fdc;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_0b40e4e6_2749_461f_9a84_29491c297f86;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_f4e04660_602b_47e3_ac2f_55267d52ca95;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_99a79705_bfc0_4c43_be58_a929322ee203;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}
