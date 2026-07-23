/*
 * XREFs of EtwpAllocateTraceBuffer @ 0x1403716DC
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140371578 (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x1409ED8AC (EtwpPreserveLogger.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1402F89D0 (MmAllocatePagesForMdlEx.c)
 *     qsort @ 0x1403DA610 (qsort.c)
 *     EtwpAllocatePartitionMemory @ 0x140601834 (EtwpAllocatePartitionMemory.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateTraceBuffer(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  unsigned __int64 v6; // r15
  PVOID v7; // r12
  PMDL PagesForMdl; // rbp

  v3 = (_QWORD *)(a1 + 1320);
  if ( *v3 )
    return EtwpAllocatePartitionMemory(v3, a2);
  if ( (*(_DWORD *)(a1 + 816) & 0x20000000) != 0 )
  {
    v6 = a2;
    v7 = 0LL;
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    (PHYSICAL_ADDRESS)0x200000LL,
                    a2,
                    MmCached,
                    0x65u);
    if ( !PagesForMdl )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(
                      0LL,
                      (PHYSICAL_ADDRESS)-1LL,
                      (PHYSICAL_ADDRESS)0x200000LL,
                      (unsigned int)v6,
                      MmCached,
                      0x25u);
      if ( !PagesForMdl )
        return (__int64)v7;
    }
    qsort(&PagesForMdl[1], v6 >> 12, 8uLL, EtwpComparePfn);
    v7 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( v7 )
    {
      if ( !*(_QWORD *)(a1 + 1328) )
      {
        *(_QWORD *)(a1 + 1328) = PagesForMdl;
        return (__int64)v7;
      }
    }
    else
    {
      MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0);
    }
    ExFreePoolWithTag(PagesForMdl, 0);
    return (__int64)v7;
  }
  v4 = 258LL;
  if ( *(_DWORD *)(a1 + 300) != 1 )
    v4 = 66LL;
  return ExAllocatePool2(v4, a2, 1115124805LL);
}
