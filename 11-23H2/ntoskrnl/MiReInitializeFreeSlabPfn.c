/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x14033938C
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1403391E0 (MiFreePageToSlabAllocator.c)
 *     MiGetSlabStandbyPage @ 0x1406573AC (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 */

char __fastcall MiReInitializeFreeSlabPfn(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned __int64 *v3; // rcx
  char result; // al

  v2 = a1;
  a1[1] = (*(_DWORD *)(a2 + 80) != 2) - 2LL;
  a1[3] &= 0xFFFFFF0000000000uLL;
  *a1 = 0LL;
  v3 = a1 + 2;
  *v3 = ZeroPte;
  if ( (*((_BYTE *)v2 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(v3);
  result = *((_BYTE *)v2 + 34) & 0xF8 | 5;
  *((_BYTE *)v2 + 34) = result;
  return result;
}
