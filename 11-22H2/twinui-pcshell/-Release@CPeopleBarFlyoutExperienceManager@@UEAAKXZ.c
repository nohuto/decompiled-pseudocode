/*
 * XREFs of ?Release@CPeopleBarFlyoutExperienceManager@@UEAAKXZ @ 0x1801419E0
 * Callers:
 *     ?Release@CPeopleBarFlyoutExperienceManager@@W7EAAKXZ @ 0x180297750 (-Release@CPeopleBarFlyoutExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WBA@EAAKXZ @ 0x180297770 (-Release@CPeopleBarFlyoutExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WBI@EAAKXZ @ 0x180297790 (-Release@CPeopleBarFlyoutExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WCA@EAAKXZ @ 0x1802977B0 (-Release@CPeopleBarFlyoutExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WCI@EAAKXZ @ 0x1802977D0 (-Release@CPeopleBarFlyoutExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::Release(CPeopleBarFlyoutExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(this);
}
