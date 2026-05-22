/*
 * XREFs of ?FrameTargetData@CTouchFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801A4050
 * Callers:
 *     ?FrameTargetData@CTouchFrameStats@@WKA@EBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800B1680 (-FrameTargetData@CTouchFrameStats@@WKA@EBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION.c)
 *     ?FrameTargetData@CInteractionFrameStats@@WBGA@EBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800B19A0 (-FrameTargetData@CInteractionFrameStats@@WBGA@EBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMP.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall CTouchFrameStats::FrameTargetData(
        CCompFrameStats *this,
        struct tagCOMPOSITION_FRAME_STATS *a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        const struct tagCOMPOSITION_TARGET_ID *a4,
        struct tagCOMPOSITION_TARGET_STATS *a5)
{
  return CCompFrameStats::FrameTargetData(this, a2, a3, a4, a5);
}
