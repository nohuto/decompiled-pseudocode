/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x180122190
 * Callers:
 *     RtlpHpHeapProtect @ 0x180121E14 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
