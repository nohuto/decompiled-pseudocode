/*
 * XREFs of ?AddRef@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x1800986F0
 * Callers:
 *     ?AddRef@CDelegatedInkTrailImpl@DirectComposition@@WBA@EAAKXZ @ 0x1800A8190 (-AddRef@CDelegatedInkTrailImpl@DirectComposition@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDelayedDestructionObject::AddRef(
        DirectComposition::CDelayedDestructionObject *this)
{
  return CMILRefCountImpl::AddReference((DirectComposition::CDelayedDestructionObject *)((char *)this + 8));
}
