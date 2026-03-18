/*
 * XREFs of ?GetUseCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x1C0052DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA?BIXZ @ 0x1C0052DB0 (-GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA-BIXZ.c)
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetUseCustomDuration(CIFlipPresentHistoryTokenFlipManager *this)
{
  return (unsigned int)CIFlipPresentHistoryTokenFlipManager::GetCustomDuration(this) != 0;
}
