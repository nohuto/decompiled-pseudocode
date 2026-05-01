/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1805905B8
 * Callers:
 *     ?GetIids@CShellSnapComponent@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805939A0 (-GetIids@CShellSnapComponent@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1805927B4 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent2.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  GUID *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x100uLL);
  if ( !v5 )
    return 2147942414LL;
  LODWORD(v9) = 6;
  *v5 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v5[1] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v5[2] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v5[3] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v5[4] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v5[5] = GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::FillArrayWithIid(
    v6,
    &v9,
    v5);
  *a2 = 16;
  result = 0LL;
  *a3 = v8;
  return result;
}
