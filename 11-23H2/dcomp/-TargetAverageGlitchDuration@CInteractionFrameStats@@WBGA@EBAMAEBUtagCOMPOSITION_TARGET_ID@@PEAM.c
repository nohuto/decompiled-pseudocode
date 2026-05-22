/*
 * XREFs of ?TargetAverageGlitchDuration@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1800B1B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CInteractionFrameStats::TargetAverageGlitchDuration(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        float *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  return CAnimationFrameStats::TargetAverageGlitchDuration((CAnimationFrameStats *)(a1 - 352), a2, a3, a4, a5);
}
