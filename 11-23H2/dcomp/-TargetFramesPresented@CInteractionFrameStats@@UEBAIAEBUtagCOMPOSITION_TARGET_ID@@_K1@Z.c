/*
 * XREFs of ?TargetFramesPresented@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4450
 * Callers:
 *     ?TargetFramesPresented@CAnimationFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1860 (-TargetFramesPresented@CAnimationFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesPresented@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1BE0 (-TargetFramesPresented@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CInteractionFrameStats::TargetFramesPresented(
        CInteractionFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesPresented(this, a2, a3, a4);
}
