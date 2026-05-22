/*
 * XREFs of ?TargetFrameRate@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B17E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CAnimationFrameStats::TargetFrameRate(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CInteractionFrameStats::TargetFrameRate((CInteractionFrameStats *)(a1 - 160), a2, a3, a4);
}
