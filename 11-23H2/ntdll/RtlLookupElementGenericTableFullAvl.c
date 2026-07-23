/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180067A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax
  _RTL_BALANCED_LINKS *RightChild; // rax

  if ( !Table->NumberGenericTableElements )
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
  for ( i = Table->BalancedRoot.RightChild; ; i = RightChild )
  {
    v9 = Table->CompareRoutine(Table, Buffer, &i[1]);
    if ( v9 == GenericLessThan )
      break;
    if ( v9 != GenericGreaterThan )
    {
      *NodeOrParent = i;
      *SearchResult = TableFoundNode;
      return (char *)*NodeOrParent + 32;
    }
    RightChild = i->RightChild;
    if ( !RightChild )
    {
      *NodeOrParent = i;
      *SearchResult = TableInsertAsRight;
      return 0LL;
    }
LABEL_7:
    ;
  }
  RightChild = i->LeftChild;
  if ( RightChild )
    goto LABEL_7;
  *NodeOrParent = i;
  *SearchResult = TableInsertAsLeft;
  return 0LL;
}
