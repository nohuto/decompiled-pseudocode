/*
 * XREFs of ?TargetFramesGlitched@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4440
 * Callers:
 *     ?TargetFramesGlitched@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1840 (-TargetFramesGlitched@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesGlitched@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1BC0 (-TargetFramesGlitched@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTouchFrameStats::TargetFramesGlitched(
        unsigned __int64 **this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesGlitched(this, a2, a3, a4);
}
