/*
 * XREFs of ?Release@PriorityBoostHelper@@UEAAKXZ @ 0x180166060
 * Callers:
 *     ?Release@PriorityBoostHelper@@W7EAAKXZ @ 0x1801F5FB0 (-Release@PriorityBoostHelper@@W7EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBA@EAAKXZ @ 0x1801F5FD0 (-Release@PriorityBoostHelper@@WBA@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBI@EAAKXZ @ 0x1801F5FF0 (-Release@PriorityBoostHelper@@WBI@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WCA@EAAKXZ @ 0x1801F6010 (-Release@PriorityBoostHelper@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall PriorityBoostHelper::Release(PriorityBoostHelper *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release(this);
}
