/*
 * XREFs of ?QPCFrequency@CAnimationFrameStats@@UEBA_KXZ @ 0x1800914B0
 * Callers:
 *     ?QPCFrequency@CTouchFrameStats@@WKA@EBA_KXZ @ 0x1800B16E0 (-QPCFrequency@CTouchFrameStats@@WKA@EBA_KXZ.c)
 *     ?QPCFrequency@CInteractionFrameStats@@WBGA@EBA_KXZ @ 0x1800B1A00 (-QPCFrequency@CInteractionFrameStats@@WBGA@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimationFrameStats::QPCFrequency(CAnimationFrameStats *this)
{
  return *((_QWORD *)this + 2);
}
