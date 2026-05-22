/*
 * XREFs of ?StartFrameId@CInteractionFrameStats@@UEBA_KXZ @ 0x1800914D0
 * Callers:
 *     ?StartFrameId@CInteractionFrameStats@@WKA@EBA_KXZ @ 0x1800B1760 (-StartFrameId@CInteractionFrameStats@@WKA@EBA_KXZ.c)
 *     ?StartFrameId@CInteractionFrameStats@@WBGA@EBA_KXZ @ 0x1800B1AE0 (-StartFrameId@CInteractionFrameStats@@WBGA@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CInteractionFrameStats::StartFrameId(CInteractionFrameStats *this)
{
  return *((_QWORD *)this + 14);
}
