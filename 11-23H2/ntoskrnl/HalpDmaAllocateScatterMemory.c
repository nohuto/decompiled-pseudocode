/*
 * XREFs of HalpDmaAllocateScatterMemory @ 0x140934668
 * Callers:
 *     HalpDmaAllocateLocalScatterPool @ 0x140934438 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140934824 (HalpDmaGrowScatterMapBuffers.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdl @ 0x1403AABC0 (MmAllocatePagesForMdl.c)
 */

PMDL __fastcall HalpDmaAllocateScatterMemory(PHYSICAL_ADDRESS *a1, unsigned int a2, _QWORD *a3)
{
  PHYSICAL_ADDRESS v3; // rdi
  SIZE_T v5; // r14
  PHYSICAL_ADDRESS v6; // rbx
  char i; // bp
  PMDL PagesForMdl; // rax
  PMDL v9; // rsi
  PVOID MappedSystemVa; // rax

  v3 = a1[18];
  v5 = (unsigned __int64)a2 << 12;
  if ( v3.LowPart == -1 )
    v6.QuadPart = 0x1000000LL;
  else
    v6.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
    PagesForMdl = MmAllocatePagesForMdl(v6, v3, 0LL, v5);
    v9 = PagesForMdl;
    if ( PagesForMdl )
      break;
    if ( i || !v6.QuadPart )
      return 0LL;
    v6.QuadPart = 0LL;
  }
  if ( (PagesForMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = PagesForMdl->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  *a3 = MappedSystemVa;
  return v9;
}
