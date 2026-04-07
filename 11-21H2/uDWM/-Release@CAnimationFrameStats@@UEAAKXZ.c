/*
 * XREFs of ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180006A20
 * Callers:
 *     ?Release@CAnimationFrameStats@@WII@EAAKXZ @ 0x1800644A0 (-Release@CAnimationFrameStats@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CAnimationFrameStats::Release(CAnimationFrameStats *this)
{
  return CCompFrameStats::Release(this);
}
