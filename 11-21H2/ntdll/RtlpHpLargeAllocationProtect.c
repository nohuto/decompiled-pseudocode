/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18011FD98
 * Callers:
 *     RtlpHpHeapProtect @ 0x18011F8D8 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
