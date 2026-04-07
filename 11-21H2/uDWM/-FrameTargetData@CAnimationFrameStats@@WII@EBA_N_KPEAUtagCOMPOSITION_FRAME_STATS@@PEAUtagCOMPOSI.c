/*
 * XREFs of ?FrameTargetData@CAnimationFrameStats@@WII@EBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180064400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimationFrameStats::FrameTargetData(
        __int64 a1,
        unsigned __int64 a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        struct tagCOMPOSITION_TARGET_ID *a4,
        struct tagCOMPOSITION_TARGET_STATS *a5)
{
  return CAnimationFrameStats::FrameTargetData((CAnimationFrameStats *)(a1 - 136), a2, a3, a4, a5);
}
