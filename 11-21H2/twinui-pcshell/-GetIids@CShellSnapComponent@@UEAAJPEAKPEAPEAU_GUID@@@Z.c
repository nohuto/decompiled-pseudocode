/*
 * XREFs of ?GetIids@CShellSnapComponent@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805939A0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18020ED30 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18020ED30.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShellSnapComponent::GetIids(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>>(
           this,
           a2,
           a3);
}
