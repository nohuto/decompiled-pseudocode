/*
 * XREFs of ?Release@CPeopleBarJumpViewExperienceManager@@UEAAKXZ @ 0x18014E940
 * Callers:
 *     ?Release@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1801F3FF0 (-Release@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1801F4010 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1801F4030 (-Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CPeopleBarJumpViewExperienceManager::Release(CPeopleBarJumpViewExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
