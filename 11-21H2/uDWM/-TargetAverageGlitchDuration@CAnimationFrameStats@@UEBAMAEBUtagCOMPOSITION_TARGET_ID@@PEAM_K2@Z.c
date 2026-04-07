/*
 * XREFs of ?TargetAverageGlitchDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x18010A9D0
 * Callers:
 *     ?TargetAverageGlitchDuration@CAnimationFrameStats@@WII@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180064540 (-TargetAverageGlitchDuration@CAnimationFrameStats@@WII@EBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2.c)
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
