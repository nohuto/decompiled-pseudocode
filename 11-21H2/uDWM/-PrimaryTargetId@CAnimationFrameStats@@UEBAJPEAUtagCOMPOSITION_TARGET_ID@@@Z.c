/*
 * XREFs of ?PrimaryTargetId@CAnimationFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180002900
 * Callers:
 *     ?PrimaryTargetId@CAnimationFrameStats@@WII@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180064440 (-PrimaryTargetId@CAnimationFrameStats@@WII@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CAnimationFrameStats::PrimaryTargetId(
        CAnimationFrameStats *this,
        struct tagCOMPOSITION_TARGET_ID *a2)
{
  return CCompFrameStats::PrimaryTargetId(this, a2);
}
