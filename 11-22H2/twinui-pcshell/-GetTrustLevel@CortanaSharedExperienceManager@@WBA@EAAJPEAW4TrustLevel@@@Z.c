/*
 * XREFs of ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180296790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return StartupTaskActivatedEventArgsImpl::GetTrustLevel((StartupTaskActivatedEventArgsImpl *)(a1 - 16), a2);
}
