/*
 * XREFs of ?CurrentFrameId@CAnimationFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180002D70
 * Callers:
 *     ?CurrentFrameId@CAnimationFrameStats@@WII@EBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1800643C0 (-CurrentFrameId@CAnimationFrameStats@@WII@EBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CAnimationFrameStats::CurrentFrameId()
{
  return CCompFrameStats::CurrentFrameId();
}
