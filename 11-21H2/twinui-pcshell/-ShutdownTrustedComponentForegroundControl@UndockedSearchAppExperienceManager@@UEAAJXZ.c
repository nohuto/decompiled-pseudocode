/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18038F860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::ShutdownTrustedComponentForegroundControl(
        UndockedSearchAppExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  return 0LL;
}
