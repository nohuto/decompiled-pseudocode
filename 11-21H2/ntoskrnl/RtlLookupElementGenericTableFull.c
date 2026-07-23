/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1405EB310
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_14021EEF0 @ 0x14021EEF0 (sub_14021EEF0.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)sub_14021EEF0((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
