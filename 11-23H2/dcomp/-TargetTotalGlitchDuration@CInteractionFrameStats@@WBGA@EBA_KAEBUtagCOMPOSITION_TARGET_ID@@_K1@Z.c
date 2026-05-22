/*
 * XREFs of ?TargetTotalGlitchDuration@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CInteractionFrameStats::TargetTotalGlitchDuration(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CAnimationFrameStats::TargetTotalGlitchDuration((CAnimationFrameStats *)(a1 - 352), a2, a3, a4);
}
