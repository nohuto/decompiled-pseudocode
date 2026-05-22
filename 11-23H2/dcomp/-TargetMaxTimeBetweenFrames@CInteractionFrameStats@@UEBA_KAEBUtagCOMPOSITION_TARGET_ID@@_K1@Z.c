/*
 * XREFs of ?TargetMaxTimeBetweenFrames@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4470
 * Callers:
 *     ?TargetMaxTimeBetweenFrames@CInteractionFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B18A0 (-TargetMaxTimeBetweenFrames@CInteractionFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxTimeBetweenFrames@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1C20 (-TargetMaxTimeBetweenFrames@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall CInteractionFrameStats::TargetMaxTimeBetweenFrames(
        unsigned __int64 **this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetMaxTimeBetweenFrames(this, a2, a3, a4);
}
