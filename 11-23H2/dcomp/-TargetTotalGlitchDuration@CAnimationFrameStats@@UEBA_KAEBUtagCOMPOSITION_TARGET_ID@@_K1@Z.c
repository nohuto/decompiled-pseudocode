/*
 * XREFs of ?TargetTotalGlitchDuration@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A44A0
 * Callers:
 *     ?TargetTotalGlitchDuration@CTouchFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1900 (-TargetTotalGlitchDuration@CTouchFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetTotalGlitchDuration@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1C80 (-TargetTotalGlitchDuration@CInteractionFrameStats@@WBGA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall CAnimationFrameStats::TargetTotalGlitchDuration(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetTotalGlitchDuration(this, a2, a3, a4);
}
