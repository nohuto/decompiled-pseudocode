/*
 * XREFs of ?GetTrustLevel@CSnapAssistController@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F43E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapAssistController::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 40), a2);
}
