/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x180103100
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlComputeImportTableHash @ 0x1800EADD0 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x180103224 (RtlpCallSecureMemoryCallbacks.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  int v4; // [rsp+3Ch] [rbp-2Ch]
  __int64 v5; // [rsp+40h] [rbp-28h]

  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    if ( a2 )
      return RtlpCallSecureMemoryCallbacks(a1, a2);
    if ( (int)ZwQueryVirtualMemory() >= 0 && v4 != 0x10000 )
    {
      a2 = v5;
      return RtlpCallSecureMemoryCallbacks(a1, a2);
    }
  }
  return 0;
}
