/*
 * XREFs of sub_14090943C @ 0x14090943C
 * Callers:
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 *     sub_1409095FC @ 0x1409095FC (sub_1409095FC.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdl @ 0x1403D8690 (MmAllocatePagesForMdl.c)
 */

PMDL __fastcall sub_14090943C(PHYSICAL_ADDRESS *a1, unsigned int a2, _QWORD *a3)
{
  PHYSICAL_ADDRESS v3; // rdi
  char v4; // bp
  SIZE_T v6; // r14
  PHYSICAL_ADDRESS v7; // rbx
  PMDL PagesForMdl; // rax
  PMDL v9; // rsi
  PVOID MappedSystemVa; // rax

  v3 = a1[17];
  v4 = 0;
  v6 = (unsigned __int64)a2 << 12;
  while ( 1 )
  {
    v7.QuadPart = 0LL;
    if ( !v4 && v3.LowPart == -1 )
      v7.QuadPart = 0x1000000LL;
    PagesForMdl = MmAllocatePagesForMdl(v7, v3, 0LL, v6);
    v9 = PagesForMdl;
    if ( PagesForMdl )
      break;
    if ( v4 || !v7.QuadPart )
      return 0LL;
    v4 = 1;
  }
  if ( (PagesForMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = PagesForMdl->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  *a3 = MappedSystemVa;
  return v9;
}
