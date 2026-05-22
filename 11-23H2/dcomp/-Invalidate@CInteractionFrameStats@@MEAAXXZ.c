/*
 * XREFs of ?Invalidate@CInteractionFrameStats@@MEAAXXZ @ 0x1801A57F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invalidate@CTouchFrameStats@@MEAAXXZ @ 0x1801A5820 (-Invalidate@CTouchFrameStats@@MEAAXXZ.c)
 */

void __fastcall CInteractionFrameStats::Invalidate(CInteractionFrameStats *this)
{
  CTouchFrameStats::Invalidate(this);
  *((_QWORD *)this + 46) = *((_QWORD *)this + 45);
}
