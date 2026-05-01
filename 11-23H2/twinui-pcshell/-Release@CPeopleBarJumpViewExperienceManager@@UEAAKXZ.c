/*
 * XREFs of ?Release@CPeopleBarJumpViewExperienceManager@@UEAAKXZ @ 0x180141780
 * Callers:
 *     ?Release@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x180297950 (-Release@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x180297970 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x180297990 (-Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarJumpViewExperienceManager::Release(CPeopleBarJumpViewExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
