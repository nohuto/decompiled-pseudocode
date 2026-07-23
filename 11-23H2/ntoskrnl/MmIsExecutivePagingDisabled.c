/*
 * XREFs of MmIsExecutivePagingDisabled @ 0x140282FD0
 * Callers:
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     RtlpWalkFrameChain @ 0x1402A4530 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

_BOOL8 MmIsExecutivePagingDisabled()
{
  return (dword_140D1D1C4 & 1) != 0;
}
