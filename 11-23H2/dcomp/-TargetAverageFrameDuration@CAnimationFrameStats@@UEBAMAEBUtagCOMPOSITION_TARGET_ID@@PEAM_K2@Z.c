/*
 * XREFs of ?TargetAverageFrameDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A43F0
 * Callers:
 *     ?TargetAverageFrameDuration@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1800B17A0 (-TargetAverageFrameDuration@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@.c)
 *     ?TargetAverageFrameDuration@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1800B1B20 (-TargetAverageFrameDuration@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __fastcall CAnimationFrameStats::TargetAverageFrameDuration(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        float *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  return CCompFrameStats::TargetAverageFrameDuration(this, a2, a3, a4, a5);
}
