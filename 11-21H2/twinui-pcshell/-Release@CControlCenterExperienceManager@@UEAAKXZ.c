/*
 * XREFs of ?Release@CControlCenterExperienceManager@@UEAAKXZ @ 0x1801657C0
 * Callers:
 *     ?Release@CControlCenterExperienceManager@@W7EAAKXZ @ 0x1801F2910 (-Release@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x1801F2930 (-Release@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x1801F2950 (-Release@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x1801F2970 (-Release@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x1801F2990 (-Release@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x1801F29B0 (-Release@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x1801F29D0 (-Release@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x1801F29F0 (-Release@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x1801F2A10 (-Release@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x1801F2A30 (-Release@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::Release(CControlCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::Release(this);
}
