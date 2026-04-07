/*
 * XREFs of ?TargetTimeToFirstFrame@CAnimationFrameStats@@WII@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180064660
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
  return CAnimationFrameStats::TargetTimeToFirstFrame((CAnimationFrameStats *)(a1 - 136), a2, a3);
}
