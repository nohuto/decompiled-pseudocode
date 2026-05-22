/*
 * XREFs of ?EndFrameId@CInteractionFrameStats@@UEBA_KXZ @ 0x1800914A0
 * Callers:
 *     ?EndFrameId@CTouchFrameStats@@WKA@EBA_KXZ @ 0x1800B1660 (-EndFrameId@CTouchFrameStats@@WKA@EBA_KXZ.c)
 *     ?EndFrameId@CInteractionFrameStats@@WBGA@EBA_KXZ @ 0x1800B1980 (-EndFrameId@CInteractionFrameStats@@WBGA@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CInteractionFrameStats::EndFrameId(CInteractionFrameStats *this)
{
  return *((_QWORD *)this + 15);
}
