/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UISnapComponentConfiguration@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18020ED30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,ISnapComponentConfiguration,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return CShellSnapComponent::GetIids((CShellSnapComponent *)(a1 - 128), a2, a3);
}
