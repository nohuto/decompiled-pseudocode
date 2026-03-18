/*
 * XREFs of ?AddRef@CHolographicManager@@W7EAAKXZ @ 0x18011BA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicManager::AddRef(__int64 a1)
{
  return CManipulationContext::AddRef((CManipulationContext *)(a1 - 8));
}
