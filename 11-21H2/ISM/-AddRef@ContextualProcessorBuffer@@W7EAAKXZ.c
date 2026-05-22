/*
 * XREFs of ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x18004F180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::AddRef(__int64 a1)
{
  return InputStateManager::AddRef((InputStateManager *)(a1 - 8));
}
