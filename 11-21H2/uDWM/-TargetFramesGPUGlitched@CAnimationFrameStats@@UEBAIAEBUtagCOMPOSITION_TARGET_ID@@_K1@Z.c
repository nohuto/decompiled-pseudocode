/*
 * XREFs of ?TargetFramesGPUGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA00
 * Callers:
 *     ?TargetFramesGPUGlitched@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800645A0 (-TargetFramesGPUGlitched@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CAnimationFrameStats::TargetFramesGPUGlitched(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesGPUGlitched(this, a2, a3, a4);
}
