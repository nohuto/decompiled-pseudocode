/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1403718F0
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1403718C0 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x140371A5C (RealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  __int64 v2; // r8
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS **v6; // r9

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( *RestartKey )
  {
    RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*RestartKey, RestartKey, v2, RestartKey);
    if ( RightChild )
      *v6 = RightChild;
  }
  else
  {
    RightChild = Table->BalancedRoot.RightChild;
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    *RestartKey = RightChild;
  }
  return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
}
