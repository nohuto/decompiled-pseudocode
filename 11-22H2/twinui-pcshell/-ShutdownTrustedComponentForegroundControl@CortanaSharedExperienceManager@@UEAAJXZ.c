/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18042DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShutdownTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 49);
  return 0LL;
}
