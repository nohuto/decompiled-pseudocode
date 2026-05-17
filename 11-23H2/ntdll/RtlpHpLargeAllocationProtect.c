/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x180123640
 * Callers:
 *     RtlpHpHeapProtect @ 0x1801232C4 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
