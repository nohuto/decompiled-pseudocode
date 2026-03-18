/*
 * XREFs of MmIsExecutivePagingDisabled @ 0x140282D40
 * Callers:
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     RtlpWalkFrameChain @ 0x1402A42A0 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

_BOOL8 MmIsExecutivePagingDisabled()
{
  return (dword_140D1D1C4 & 1) != 0;
}
