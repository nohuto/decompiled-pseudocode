/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1402DECF0
 * Callers:
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_14075E74C @ 0x14075E74C (sub_14075E74C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140768024 @ 0x140768024 (sub_140768024.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_1407734A4 @ 0x1407734A4 (sub_1407734A4.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_1407EF930 @ 0x1407EF930 (sub_1407EF930.c)
 *     sub_140811940 @ 0x140811940 (sub_140811940.c)
 *     sub_140818900 @ 0x140818900 (sub_140818900.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_1409491C0 @ 0x1409491C0 (sub_1409491C0.c)
 *     sub_14095336C @ 0x14095336C (sub_14095336C.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 *     sub_14098A25C @ 0x14098A25C (sub_14098A25C.c)
 *     sub_14099EF9C @ 0x14099EF9C (sub_14099EF9C.c)
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 *     sub_140A9DA38 @ 0x140A9DA38 (sub_140A9DA38.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 * Callees:
 *     sub_140253690 @ 0x140253690 (sub_140253690.c)
 *     sub_1402DEDA0 @ 0x1402DEDA0 (sub_1402DEDA0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  int v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = sub_14042A5E0(Table, Buffer);
    if ( !v5 )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != 1 )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (PRTL_BALANCED_LINKS)sub_140253690(RightChild);
  ++Table->DeleteCount;
  sub_1402DEDA0(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  sub_14042A5E0(Table, RightChild);
  return 1;
}
