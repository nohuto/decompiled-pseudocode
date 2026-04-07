/*
 * XREFs of ?TargetMaxTimeBetweenFrames@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA40
 * Callers:
 *     ?TargetMaxTimeBetweenFrames@CAnimationFrameStats@@WII@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180064620 (-TargetMaxTimeBetweenFrames@CAnimationFrameStats@@WII@EBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall CAnimationFrameStats::TargetMaxTimeBetweenFrames(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetMaxTimeBetweenFrames(this, a2, a3, a4);
}
