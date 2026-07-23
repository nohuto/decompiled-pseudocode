/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x180104510
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x180046B30 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlComputeImportTableHash @ 0x1800EC100 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x180104634 (RtlpCallSecureMemoryCallbacks.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  _BYTE MemoryInformation[12]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+3Ch] [rbp-2Ch]
  SIZE_T v6; // [rsp+40h] [rbp-28h]

  if ( RtlpSecMemListHead != &RtlpSecMemListHead )
  {
    if ( MemoryLength )
      return RtlpCallSecureMemoryCallbacks(MemoryCache, MemoryLength);
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           MemoryCache,
           MemoryRegionInformation,
           MemoryInformation,
           0x30uLL,
           0LL) >= 0
      && v5 != 0x10000 )
    {
      MemoryLength = v6;
      return RtlpCallSecureMemoryCallbacks(MemoryCache, MemoryLength);
    }
  }
  return 0;
}
