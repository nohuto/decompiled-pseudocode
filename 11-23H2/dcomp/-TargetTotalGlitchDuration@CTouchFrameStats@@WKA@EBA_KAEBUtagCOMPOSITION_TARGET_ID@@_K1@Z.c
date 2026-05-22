/*
 * XREFs of ?TargetTotalGlitchDuration@CTouchFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::TargetTotalGlitchDuration(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CAnimationFrameStats::TargetTotalGlitchDuration((CAnimationFrameStats *)(a1 - 160), a2, a3, a4);
}
