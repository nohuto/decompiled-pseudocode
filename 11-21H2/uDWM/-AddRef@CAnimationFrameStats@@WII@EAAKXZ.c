/*
 * XREFs of ?AddRef@CAnimationFrameStats@@WII@EAAKXZ @ 0x1800643A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationFrameStats::AddRef(__int64 a1)
{
  return CCompFrameStats::AddRef((CCompFrameStats *)(a1 - 136));
}
