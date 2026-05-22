/*
 * XREFs of ?CurrentFrameId@CInteractionFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180008070
 * Callers:
 *     ?CurrentFrameId@CTouchFrameStats@@WKA@EBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1800B1640 (-CurrentFrameId@CTouchFrameStats@@WKA@EBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     ?CurrentFrameId@CInteractionFrameStats@@WBGA@EBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1800B1960 (-CurrentFrameId@CInteractionFrameStats@@WBGA@EBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CInteractionFrameStats::CurrentFrameId()
{
  return CCompFrameStats::CurrentFrameId();
}
