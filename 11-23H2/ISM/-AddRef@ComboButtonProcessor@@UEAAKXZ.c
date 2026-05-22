/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x18002A240
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x180065A90 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MPCFocusTarget@@WFA@EAAKXZ @ 0x180066EF0 (-AddRef@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
