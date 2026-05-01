/*
 * XREFs of ?Release@CShoulderTapExperienceManager@@UEAAKXZ @ 0x180141530
 * Callers:
 *     ?Release@CShoulderTapExperienceManager@@W7EAAKXZ @ 0x180297A20 (-Release@CShoulderTapExperienceManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::Release(CShoulderTapExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShoulderTapExperienceManager>::Release(this);
}
