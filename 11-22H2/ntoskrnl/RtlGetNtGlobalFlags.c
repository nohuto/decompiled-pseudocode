/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409BD7F0
 * Callers:
 *     RtlpAllocateHeap @ 0x1405AB2D8 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
