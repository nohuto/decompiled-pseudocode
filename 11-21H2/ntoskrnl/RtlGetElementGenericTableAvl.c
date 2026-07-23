/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1405EB370
 * Callers:
 *     <none>
 * Callees:
 *     sub_140253690 @ 0x140253690 (sub_140253690.c)
 *     sub_1402DEC9C @ 0x1402DEC9C (sub_1402DEC9C.c)
 */

PVOID __stdcall RtlGetElementGenericTableAvl(PRTL_AVL_TABLE Table, ULONG I)
{
  ULONG WhichOrderedElement; // r8d
  ULONG v3; // r9d
  PRTL_AVL_TABLE v4; // r10
  ULONG NumberGenericTableElements; // edx
  _QWORD *OrderedPointer; // rcx
  _QWORD *i; // rax
  int v9; // r8d
  _QWORD *k; // rax
  int v11; // r11d
  unsigned int v12; // edx
  int v13; // r11d
  _QWORD *j; // rax
  int v15; // r8d

  WhichOrderedElement = Table->WhichOrderedElement;
  v3 = I;
  v4 = Table;
  if ( I == -1 )
    return 0LL;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  if ( v3 + 1 > NumberGenericTableElements )
    return 0LL;
  OrderedPointer = Table->OrderedPointer;
  if ( !OrderedPointer )
  {
    OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
    for ( i = (_QWORD *)OrderedPointer[1]; i; i = (_QWORD *)i[1] )
      OrderedPointer = i;
    WhichOrderedElement = 0;
    v4->OrderedPointer = OrderedPointer;
    v4->WhichOrderedElement = 0;
  }
  if ( v3 != WhichOrderedElement )
  {
    if ( v3 >= WhichOrderedElement )
    {
      v12 = NumberGenericTableElements - v3;
      if ( v3 - WhichOrderedElement > v12 )
      {
        OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
        for ( j = (_QWORD *)OrderedPointer[2]; j; j = (_QWORD *)j[2] )
          OrderedPointer = j;
        if ( v12 != 1 )
        {
          do
            OrderedPointer = sub_140253690(OrderedPointer);
          while ( v15 != 1 );
        }
      }
      else if ( v3 != WhichOrderedElement )
      {
        do
          OrderedPointer = sub_1402DEC9C(OrderedPointer);
        while ( v13 != 1 );
      }
    }
    else if ( v3 < WhichOrderedElement >> 1 )
    {
      OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
      for ( k = (_QWORD *)OrderedPointer[1]; k; k = (_QWORD *)k[1] )
        OrderedPointer = k;
      if ( v3 )
      {
        do
          OrderedPointer = sub_1402DEC9C(OrderedPointer);
        while ( v11 != 1 );
      }
    }
    else if ( WhichOrderedElement != v3 )
    {
      do
        OrderedPointer = sub_140253690(OrderedPointer);
      while ( v9 != 1 );
    }
    v4->OrderedPointer = OrderedPointer;
    v4->WhichOrderedElement = v3;
  }
  return OrderedPointer + 4;
}
