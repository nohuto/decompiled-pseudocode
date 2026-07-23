/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x14021EAA0
 * Callers:
 *     RtlInsertElementGenericTable @ 0x14021EA30 (RtlInsertElementGenericTable.c)
 * Callees:
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // r14
  __int64 v10; // rdx
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS *v12; // rbx
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v12 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_10:
    Table->TableRoot = RtlSplay(v12);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v12[1].RightChild;
  }
  v10 = BufferSize + 40;
  if ( (unsigned int)v10 >= BufferSize )
  {
    v11 = (_RTL_SPLAY_LINKS *)sub_14042A5E0(Table, v10, BufferSize);
    v12 = v11;
    if ( v11 )
    {
      v11->LeftChild = 0LL;
      v13 = (struct _LIST_ENTRY *)&v11[1];
      v11->RightChild = 0LL;
      v11->Parent = v11;
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v13->Flink = &Table->InsertOrderList;
      v11[1].LeftChild = (_RTL_SPLAY_LINKS *)Blink;
      Blink->Flink = v13;
      Table->InsertOrderList.Blink = v13;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v11;
      }
      memmove(&v11[1].RightChild, Buffer, v7);
      goto LABEL_10;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
