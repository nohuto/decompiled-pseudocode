/*
 * XREFs of ?AddRef@CDelegatedInkTrailImpl@DirectComposition@@WBA@EAAKXZ @ 0x1800A8190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::AddRef(__int64 a1)
{
  return DirectComposition::CDelayedDestructionObject::AddRef((DirectComposition::CDelayedDestructionObject *)(a1 - 16));
}
