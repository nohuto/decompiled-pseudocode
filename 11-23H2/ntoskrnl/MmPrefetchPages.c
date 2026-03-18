/*
 * XREFs of MmPrefetchPages @ 0x14073E6C0
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14073E6D8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
