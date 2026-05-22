/*
 * XREFs of ?Release@MPCFocusTarget@@UEAAKXZ @ 0x180080490
 * Callers:
 *     ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x18004EB40 (-Release@ComboButtonProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WEA@EAAKXZ @ 0x180050000 (-Release@MPCFocusTarget@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::Release(MPCFocusTarget *this)
{
  return RefCountedObject::Release((MPCFocusTarget *)((char *)this + 8));
}
