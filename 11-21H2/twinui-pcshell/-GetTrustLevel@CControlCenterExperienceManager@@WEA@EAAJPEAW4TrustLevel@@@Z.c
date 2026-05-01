/*
 * XREFs of ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F25F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 64), a2);
}
