/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180063640
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180063620 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *v3; // rcx
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *j; // rcx

  if ( Table->NumberGenericTableElements )
  {
    v3 = (_RTL_BALANCED_LINKS *)*RestartKey;
    if ( *RestartKey )
    {
      RightChild = v3->RightChild;
      if ( RightChild )
      {
        for ( i = RightChild->LeftChild; i; i = i->LeftChild )
          RightChild = i;
      }
      else
      {
        for ( RightChild = v3->Parent; RightChild->RightChild == v3; RightChild = RightChild->Parent )
          v3 = RightChild;
        if ( RightChild->LeftChild != v3 )
        {
          RightChild = 0LL;
          return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
        }
      }
      if ( !RightChild )
        return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
    }
    else
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( j = RightChild->LeftChild; j; j = j->LeftChild )
        RightChild = j;
    }
    *RestartKey = RightChild;
    return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
  }
  return 0LL;
}
