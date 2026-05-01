/*
 * XREFs of ?GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18034E690
 * Callers:
 *     ?GetIids@CActionCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801F1AB0 (-GetIids@CActionCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CActionCenterExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801F1AD0 (-GetIids@CActionCenterExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CActionCenterExperienceManager@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801F1AF0 (-GetIids@CActionCenterExperienceManager@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::GetIids(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::GetIids(
           this,
           a2,
           a3);
}
