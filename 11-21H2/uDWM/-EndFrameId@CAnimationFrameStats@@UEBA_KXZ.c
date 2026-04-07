/*
 * XREFs of ?EndFrameId@CAnimationFrameStats@@UEBA_KXZ @ 0x18004A440
 * Callers:
 *     ?EndFrameId@CAnimationFrameStats@@WII@EBA_KXZ @ 0x1800643E0 (-EndFrameId@CAnimationFrameStats@@WII@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimationFrameStats::EndFrameId(CAnimationFrameStats *this)
{
  return *((_QWORD *)this + 12);
}
