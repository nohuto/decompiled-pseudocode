/*
 * XREFs of ?Release@CManipulationContext@@UEAAKXZ @ 0x18012D5A0
 * Callers:
 *     ?Release@CHolographicManager@@W7EAAKXZ @ 0x18011B710 (-Release@CHolographicManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::Release(CManipulationContext *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 2);
}
