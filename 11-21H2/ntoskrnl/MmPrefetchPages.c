/*
 * XREFs of MmPrefetchPages @ 0x1406F9970
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return sub_1406FA730(NumberOfLists, ReadLists, 0LL);
}
