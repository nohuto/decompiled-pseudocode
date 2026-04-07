/*
 * XREFs of ?TargetFrameRate@CAnimationFrameStats@@WII@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180064560
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
  return CAnimationFrameStats::TargetFrameRate((CAnimationFrameStats *)(a1 - 136), a2, a3, a4);
}
