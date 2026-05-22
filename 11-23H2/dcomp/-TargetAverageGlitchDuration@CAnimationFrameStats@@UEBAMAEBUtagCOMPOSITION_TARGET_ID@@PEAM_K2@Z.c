/*
 * XREFs of ?TargetAverageGlitchDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A4400
 * Callers:
 *     ?TargetAverageGlitchDuration@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1800B17C0 (-TargetAverageGlitchDuration@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2.c)
 *     ?TargetAverageGlitchDuration@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1800B1B40 (-TargetAverageGlitchDuration@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __fastcall CAnimationFrameStats::TargetAverageGlitchDuration(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        float *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  return CCompFrameStats::TargetAverageGlitchDuration(this, a2, a3, a4, a5);
}
