/*
 * XREFs of ?TargetFramesPresented@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInteractionFrameStats::TargetFramesPresented(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CInteractionFrameStats::TargetFramesPresented((CInteractionFrameStats *)(a1 - 352), a2, a3, a4);
}
