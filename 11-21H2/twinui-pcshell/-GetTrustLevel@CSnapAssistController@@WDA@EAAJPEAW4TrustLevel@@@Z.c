/*
 * XREFs of ?GetTrustLevel@CSnapAssistController@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F35B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapAssistController::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 48), a2);
}
