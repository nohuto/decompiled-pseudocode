/*
 * XREFs of ?TargetMaxVBlankGlitchDuration@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B18C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInteractionFrameStats::TargetMaxVBlankGlitchDuration(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CTouchFrameStats::TargetMaxVBlankGlitchDuration((CTouchFrameStats *)(a1 - 160), a2, a3, a4);
}
