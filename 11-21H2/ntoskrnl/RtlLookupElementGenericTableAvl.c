/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1402DF3F0
 * Callers:
 *     sub_14075E74C @ 0x14075E74C (sub_14075E74C.c)
 *     sub_14075EB84 @ 0x14075EB84 (sub_14075EB84.c)
 *     sub_140767130 @ 0x140767130 (sub_140767130.c)
 *     sub_14076D824 @ 0x14076D824 (sub_14076D824.c)
 *     sub_14076E854 @ 0x14076E854 (sub_14076E854.c)
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077B12C @ 0x14077B12C (sub_14077B12C.c)
 *     sub_1407EFF80 @ 0x1407EFF80 (sub_1407EFF80.c)
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 *     sub_14099F0A0 @ 0x14099F0A0 (sub_14099F0A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  int v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v6 = sub_14042A5E0(Table, Buffer);
        if ( !v6 )
          break;
        if ( v6 != 1 )
        {
          v7 = 1;
          goto LABEL_10;
        }
        if ( !i->RightChild )
        {
          v7 = 3;
          goto LABEL_10;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
