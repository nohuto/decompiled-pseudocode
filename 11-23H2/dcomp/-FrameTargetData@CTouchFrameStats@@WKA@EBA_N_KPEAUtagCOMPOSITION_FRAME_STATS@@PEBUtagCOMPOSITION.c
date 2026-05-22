/*
 * XREFs of ?FrameTargetData@CTouchFrameStats@@WKA@EBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800B1680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTouchFrameStats::FrameTargetData(
        __int64 a1,
        unsigned __int64 a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        const struct tagCOMPOSITION_TARGET_ID *a4,
        struct tagCOMPOSITION_TARGET_STATS *a5)
{
  return CTouchFrameStats::FrameTargetData((CTouchFrameStats *)(a1 - 160), a2, a3, a4, a5);
}
