/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x18006A470
 * Callers:
 *     RtlLookupElementGenericTable @ 0x18006A440 (RtlLookupElementGenericTable.c)
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006A4C4 (FindNodeOrParent_0.c)
 *     RtlSplay @ 0x18006A570 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT NodeOrParent_0; // eax

  NodeOrParent_0 = (unsigned int)FindNodeOrParent_0(Table, Buffer, NodeOrParent);
  *SearchResult = NodeOrParent_0;
  if ( NodeOrParent_0 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
