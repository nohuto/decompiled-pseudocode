/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1402DF320
 * Callers:
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  int v9; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v9 = sub_14042A5E0(Table, Buffer);
        if ( v9 )
          break;
        if ( !i->LeftChild )
        {
          *NodeOrParent = i;
          *SearchResult = TableInsertAsLeft;
          return 0LL;
        }
        i = i->LeftChild;
      }
      if ( v9 != 1 )
        break;
      if ( !i->RightChild )
      {
        *NodeOrParent = i;
        *SearchResult = TableInsertAsRight;
        return 0LL;
      }
    }
    *NodeOrParent = i;
    *SearchResult = TableFoundNode;
    return (char *)*NodeOrParent + 32;
  }
  else
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
}
