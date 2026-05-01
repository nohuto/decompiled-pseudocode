/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@SearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x180359B40
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UITrustedComponentForegroundControl@@@WRL@Microsoft@@QEAAAEAV012@PEAUITrustedComponentForegroundControl@@@Z @ 0x180357E1C (--4-$ComPtr@UITrustedComponentForegroundControl@@@WRL@Microsoft@@QEAAAEAV012@PEAUITrustedCompone.c)
 */

__int64 __fastcall SearchAppExperienceManager::InitializeTrustedComponentForegroundControl(
        SearchAppExperienceManager *this,
        struct ITrustedComponentForegroundControl *a2)
{
  Microsoft::WRL::ComPtr<ITrustedComponentForegroundControl>::operator=((__int64 *)this + 49, (__int64)a2);
  return 0LL;
}
