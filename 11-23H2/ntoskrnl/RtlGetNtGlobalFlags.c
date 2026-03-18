/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409BD740
 * Callers:
 *     RtlpAllocateHeap @ 0x1405AB248 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
