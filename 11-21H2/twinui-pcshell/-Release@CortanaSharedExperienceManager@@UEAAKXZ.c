/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x18022C7E0
 * Callers:
 *     ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x1801F2FD0 (-Release@SearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBA@EAAKXZ @ 0x1801F2FF0 (-Release@SearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBI@EAAKXZ @ 0x1801F3010 (-Release@SearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaSharedExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
