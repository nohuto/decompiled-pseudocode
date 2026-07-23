/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1800634A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rdi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  _RTL_BALANCED_LINKS *RightChild; // rax
  int v8; // eax
  _RTL_BALANCED_LINKS *v10; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = RightChild )
    {
      v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
      if ( v6 )
      {
        if ( v6 != GenericGreaterThan )
        {
          v8 = 1;
          goto LABEL_10;
        }
        RightChild = i->RightChild;
        if ( !RightChild )
        {
          v8 = 3;
          goto LABEL_10;
        }
      }
      else
      {
        RightChild = i->LeftChild;
        if ( !RightChild )
        {
          v8 = 2;
          goto LABEL_10;
        }
      }
    }
  }
  i = v10;
  v8 = 0;
LABEL_10:
  if ( v8 == 1 )
    return &i[1];
  return v2;
}
