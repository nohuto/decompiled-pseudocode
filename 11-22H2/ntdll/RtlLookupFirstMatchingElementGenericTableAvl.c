/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008A610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v7; // eax
  _RTL_BALANCED_LINKS *LeftChild; // rax
  _RTL_BALANCED_LINKS *v9; // rsi
  _RTL_BALANCED_LINKS *j; // rax
  _RTL_BALANCED_LINKS *i; // rcx

  *RestartKey = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    RightChild = Table->BalancedRoot.RightChild;
    do
    {
      v7 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
      if ( v7 )
      {
        if ( v7 != GenericGreaterThan )
        {
          while ( 1 )
          {
            LeftChild = RightChild->LeftChild;
            v9 = RightChild;
            if ( LeftChild )
            {
              for ( i = LeftChild->RightChild; i; i = i->RightChild )
                LeftChild = i;
              RightChild = LeftChild;
            }
            else
            {
              for ( j = RightChild->Parent; j->LeftChild == RightChild; j = j->Parent )
                RightChild = j;
              if ( j->RightChild != RightChild || j->Parent == j )
              {
LABEL_10:
                *RestartKey = v9;
                return &v9[1];
              }
              RightChild = j;
            }
            if ( Table->CompareRoutine(Table, Buffer, &RightChild[1]) != GenericEqual )
              goto LABEL_10;
          }
        }
        RightChild = RightChild->RightChild;
      }
      else
      {
        RightChild = RightChild->LeftChild;
      }
    }
    while ( RightChild );
  }
  return 0LL;
}
