/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x180104150
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180062D58 (FindNodeOrParent.c)
 *     RtlSplay @ 0x180062E00 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)FindNodeOrParent((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
