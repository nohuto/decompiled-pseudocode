/*
 * XREFs of ?Release@CInsightsExperienceManager@@UEAAKXZ @ 0x18014FF60
 * Callers:
 *     ?Release@CInsightsExperienceManager@@W7EAAKXZ @ 0x1801F55A0 (-Release@CInsightsExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CInsightsExperienceManager@@WBA@EAAKXZ @ 0x1801F55C0 (-Release@CInsightsExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CInsightsExperienceManager@@WBI@EAAKXZ @ 0x1801F55E0 (-Release@CInsightsExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CInsightsExperienceManager@@WCA@EAAKXZ @ 0x1801F5600 (-Release@CInsightsExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CInsightsExperienceManager::Release(CInsightsExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(this);
}
