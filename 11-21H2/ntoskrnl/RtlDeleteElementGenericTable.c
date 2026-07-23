/*
 * XREFs of RtlDeleteElementGenericTable @ 0x14021E9A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 *     sub_14021EEF0 @ 0x14021EEF0 (sub_14021EEF0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rdi
  __int64 v4; // r8
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  Links = 0LL;
  if ( (unsigned int)sub_14021EEF0(Table, Buffer, &Links) != 1 )
    return 0;
  v3 = Links;
  Table->TableRoot = RtlDelete(Links);
  Parent = v3[1].Parent;
  if ( Parent->LeftChild != &v3[1] || (LeftChild = v3[1].LeftChild, LeftChild->Parent != &v3[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = &Table->InsertOrderList;
  sub_14042A5E0(Table, v3, v4);
  return 1;
}
