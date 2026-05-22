/*
 * XREFs of ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x180079430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::AddRef(__int64 a1)
{
  return LampArrayRawInputProvider::AddRef((LampArrayRawInputProvider *)(a1 - 8));
}
