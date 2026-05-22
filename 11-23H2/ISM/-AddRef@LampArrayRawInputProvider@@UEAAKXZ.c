/*
 * XREFs of ?AddRef@LampArrayRawInputProvider@@UEAAKXZ @ 0x18002A1F0
 * Callers:
 *     ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x1800659B0 (-AddRef@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x1800659D0 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x180066110 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LampArrayRawInputProvider::AddRef(LampArrayRawInputProvider *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
