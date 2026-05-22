/*
 * XREFs of ?TargetMaxVBlankGlitchDuration@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4480
 * Callers:
 *     ?TargetMaxVBlankGlitchDuration@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B18C0 (-TargetMaxVBlankGlitchDuration@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1.c)
 *     ?TargetMaxVBlankGlitchDuration@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1C40 (-TargetMaxVBlankGlitchDuration@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTouchFrameStats::TargetMaxVBlankGlitchDuration(
        unsigned __int64 **this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetMaxVBlankGlitchDuration(this, a2, a3, a4);
}
