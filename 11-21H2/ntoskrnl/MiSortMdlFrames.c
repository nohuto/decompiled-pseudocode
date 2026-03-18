/*
 * XREFs of MiSortMdlFrames @ 0x14058A0E0
 * Callers:
 *     MiRemoveMdlPages @ 0x14096AF9C (MiRemoveMdlPages.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
}
