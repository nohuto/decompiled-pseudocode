/*
 * XREFs of ?TargetFramesPresented@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA20
 * Callers:
 *     ?TargetFramesPresented@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800645E0 (-TargetFramesPresented@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CAnimationFrameStats::TargetFramesPresented(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesPresented(this, a2, a3, a4);
}
