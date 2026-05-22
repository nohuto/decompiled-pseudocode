/*
 * XREFs of ?AddRef@LampArrayRawInputProvider@@UEAAKXZ @ 0x18002BB10
 * Callers:
 *     ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x180079430 (-AddRef@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x180079450 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x180079B90 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LampArrayRawInputProvider::AddRef(LampArrayRawInputProvider *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
