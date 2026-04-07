/*
 * XREFs of ?TargetFramesCPUGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010A9F0
 * Callers:
 *     ?TargetFramesCPUGlitched@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180064580 (-TargetFramesCPUGlitched@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CAnimationFrameStats::TargetFramesCPUGlitched(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesCPUGlitched(this, a2, a3, a4);
}
