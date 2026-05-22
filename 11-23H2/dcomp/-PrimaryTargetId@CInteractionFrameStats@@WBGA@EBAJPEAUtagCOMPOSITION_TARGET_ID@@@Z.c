/*
 * XREFs of ?PrimaryTargetId@CInteractionFrameStats@@WBGA@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800B19E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionFrameStats::PrimaryTargetId(__int64 a1, struct tagCOMPOSITION_TARGET_ID *a2)
{
  return CTouchFrameStats::PrimaryTargetId((CTouchFrameStats *)(a1 - 352), a2);
}
