/*
 * XREFs of ?AddRef@CActionCenterExperienceManager@@UEAAKXZ @ 0x180165290
 * Callers:
 *     ?AddRef@CActionCenterExperienceManager@@W7EAAKXZ @ 0x1801F18B0 (-AddRef@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x1801F18D0 (-AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x1801F18F0 (-AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x1801F1910 (-AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x1801F1930 (-AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x1801F1950 (-AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x1801F1970 (-AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x1801F1990 (-AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x1801F19B0 (-AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x1801F19D0 (-AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFI@EAAKXZ @ 0x1801F19F0 (-AddRef@CActionCenterExperienceManager@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CActionCenterExperienceManager::AddRef(CActionCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::AddRef(this);
}
