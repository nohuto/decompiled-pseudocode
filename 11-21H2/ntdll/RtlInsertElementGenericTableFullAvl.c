/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x18005FD00
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x18005FC90 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     RebalanceNode @ 0x18005FF10 (RebalanceNode.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

PVOID __cdecl RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v6; // r14
  __int64 v10; // rax
  char *v11; // rdi
  _BYTE *v12; // r8
  _BYTE *v13; // rcx
  _QWORD *i; // rdx
  char v15; // al
  PVOID result; // rax

  v6 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (char *)NodeOrParent;
LABEL_15:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    Table->WhichOrderedElement = 0;
    result = v11 + 32;
    Table->OrderedPointer = 0LL;
    return result;
  }
  if ( BufferSize + 32 >= BufferSize )
  {
    v10 = ((__int64 (*)(void))Table->AllocateRoutine)();
    v11 = (char *)v10;
    if ( v10 )
    {
      *(_OWORD *)v10 = 0LL;
      *(_OWORD *)(v10 + 16) = 0LL;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v12 = (_BYTE *)v10;
        v13 = NodeOrParent;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v10;
        else
          *((_QWORD *)NodeOrParent + 2) = v10;
        *(_QWORD *)v10 = NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        for ( i = *(_QWORD **)v10; ; v13 = i )
        {
          v15 = -1;
          if ( (_BYTE *)i[1] != v12 )
            v15 = 1;
          if ( v13[24] )
            break;
          i = *(_QWORD **)v13;
          v12 = v13;
          v13[24] = v15;
        }
        if ( v13[24] == v15 )
        {
          RebalanceNode(v13);
        }
        else
        {
          v13[24] = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = (_RTL_BALANCED_LINKS *)v10;
        *(_QWORD *)v10 = Table;
        Table->DepthOfTree = 1;
      }
      memmove(v11 + 32, Buffer, v6);
      goto LABEL_15;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
