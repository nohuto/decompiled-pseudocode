/*
 * XREFs of ?TargetTimeToFirstFrame@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x18010AA60
 * Callers:
 *     ?TargetTimeToFirstFrame@CAnimationFrameStats@@WII@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180064660 (-TargetTimeToFirstFrame@CAnimationFrameStats@@WII@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall CAnimationFrameStats::TargetTimeToFirstFrame(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3)
{
  return CCompFrameStats::TargetTimeToFirstFrame(this, a2, a3);
}
