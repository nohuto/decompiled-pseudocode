/*
 * XREFs of sub_140261A20 @ 0x140261A20
 * Callers:
 *     sub_14026187C @ 0x14026187C (sub_14026187C.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_1406333A8 @ 0x1406333A8 (sub_1406333A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140261A20(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  unsigned __int64 v6; // r15
  PVOID v7; // r12
  PMDL PagesForMdl; // rbp

  v3 = (_QWORD *)(a1 + 1320);
  if ( *v3 )
    return sub_1406333A8(v3, a2);
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
    qsort(&PagesForMdl[1], v6 >> 12, 8uLL, sub_14062CA50);
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
      sub_140221A30((ULONG_PTR)PagesForMdl, 0);
    }
    ExFreePoolWithTag(PagesForMdl, 0);
    return (__int64)v7;
  }
  v4 = 258LL;
  if ( *(_DWORD *)(a1 + 300) != 1 )
    v4 = 66LL;
  return ExAllocatePool2(v4, a2, 1115124805LL);
}
