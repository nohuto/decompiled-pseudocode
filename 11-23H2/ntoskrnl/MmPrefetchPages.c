/*
 * XREFs of MmPrefetchPages @ 0x14073E8B0
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14073E8C8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
