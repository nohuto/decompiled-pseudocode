/*
 * XREFs of KiInterruptThunk @ 0x14042C390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiInterruptThunk()
{
  return FsRtlTruncateSmallMcb();
}
