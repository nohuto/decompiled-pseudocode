/*
 * XREFs of ?IsMultiMon@CInteractionFrameStats@@WBGA@EBA_NXZ @ 0x1800B19C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionFrameStats::IsMultiMon(__int64 a1)
{
  return CAnimationFrameStats::IsMultiMon((CAnimationFrameStats *)(a1 - 352));
}
