/*
 * XREFs of ?Release@SearchAppExperienceManager@@WBA@EAAKXZ @ 0x1801F2FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release((CortanaSharedExperienceManager *)(a1 - 16));
}
