/*
 * XREFs of ?TargetFramesGPUGlitched@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4430
 * Callers:
 *     ?TargetFramesGPUGlitched@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1820 (-TargetFramesGPUGlitched@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesGPUGlitched@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1BA0 (-TargetFramesGPUGlitched@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CTouchFrameStats::TargetFramesGPUGlitched(
        CTouchFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesGPUGlitched(this, a2, a3, a4);
}
