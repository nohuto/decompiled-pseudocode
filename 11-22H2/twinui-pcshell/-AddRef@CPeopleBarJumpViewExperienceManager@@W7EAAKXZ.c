/*
 * XREFs of ?AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1802977F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::AddRef(__int64 a1)
{
  return CScreenClippingExperienceManager::AddRef((CScreenClippingExperienceManager *)(a1 - 8));
}
