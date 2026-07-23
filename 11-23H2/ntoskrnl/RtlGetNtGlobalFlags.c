/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409BD940
 * Callers:
 *     RtlpAllocateHeap @ 0x1405AB7B8 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
