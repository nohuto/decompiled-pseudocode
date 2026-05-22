/*
 * XREFs of ?AddRef@InputStateManager@@UEAAKXZ @ 0x180022600
 * Callers:
 *     ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x18004F180 (-AddRef@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x18004F1A0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x18004F1C0 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(InputStateManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
