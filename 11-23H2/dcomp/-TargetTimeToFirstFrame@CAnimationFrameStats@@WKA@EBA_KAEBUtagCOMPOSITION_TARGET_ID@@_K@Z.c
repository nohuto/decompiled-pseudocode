/*
 * XREFs of ?TargetTimeToFirstFrame@CAnimationFrameStats@@WKA@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x1800B18E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimationFrameStats::TargetTimeToFirstFrame(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3)
{
  return CInteractionFrameStats::TargetTimeToFirstFrame((CInteractionFrameStats *)(a1 - 160), a2, a3);
}
