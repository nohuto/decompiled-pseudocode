/*
 * XREFs of RtlLookupElementGenericTable @ 0x14021EC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID __stdcall RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0LL;
  while ( 1 )
  {
    v5 = sub_14042A5E0(Table, Buffer, &TableRoot[1].RightChild);
    if ( v5 )
      break;
    TableRoot = TableRoot->LeftChild;
LABEL_4:
    if ( !TableRoot )
      return 0LL;
  }
  if ( v5 == 1 )
  {
    TableRoot = TableRoot->RightChild;
    goto LABEL_4;
  }
  Table->TableRoot = RtlSplay(TableRoot);
  return &TableRoot[1].RightChild;
}
