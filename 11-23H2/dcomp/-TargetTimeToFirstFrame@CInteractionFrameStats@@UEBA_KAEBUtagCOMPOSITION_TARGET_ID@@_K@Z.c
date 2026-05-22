/*
 * XREFs of ?TargetTimeToFirstFrame@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x1801A4490
 * Callers:
 *     ?TargetTimeToFirstFrame@CAnimationFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x1800B18E0 (-TargetTimeToFirstFrame@CAnimationFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 *     ?TargetTimeToFirstFrame@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x1800B1C60 (-TargetTimeToFirstFrame@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall CInteractionFrameStats::TargetTimeToFirstFrame(
        CInteractionFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3)
{
  return CCompFrameStats::TargetTimeToFirstFrame(this, a2, a3);
}
