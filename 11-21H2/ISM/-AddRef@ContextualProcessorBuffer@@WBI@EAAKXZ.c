/*
 * XREFs of ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x18004F1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::AddRef(__int64 a1)
{
  return InputStateManager::AddRef((InputStateManager *)(a1 - 24));
}
