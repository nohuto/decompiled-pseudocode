/*
 * XREFs of ?AddRef@CJumpViewExperienceManager@@W7EAAKXZ @ 0x1801F3A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::AddRef(__int64 a1)
{
  return CPeopleBarFlyoutExperienceManager::AddRef((CPeopleBarFlyoutExperienceManager *)(a1 - 8));
}
