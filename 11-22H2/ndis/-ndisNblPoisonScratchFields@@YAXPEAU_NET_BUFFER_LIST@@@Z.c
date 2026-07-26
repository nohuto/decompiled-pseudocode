/*
 * XREFs of ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072708
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0002580 (NdisReturnNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C00034C0 (NdisSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0004390 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0004680 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0004980 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C0005410 (NdisFSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00132A0 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013730 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 */

void __fastcall ndisNblPoisonScratchFields(struct _NET_BUFFER_LIST *a1)
{
  char v1; // si
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int Flags; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  _NET_BUFFER_LIST_CONTEXT *i; // rdi

  if ( a1 )
  {
    v1 = byte_1C00F786C;
    Alignment = a1;
    do
    {
      Flags = Alignment->Flags;
      v1 = v1 == 0;
      byte_1C00F786C = v1;
      v4 = Flags & 0xFFF0FFFF;
      Alignment->Scratch = MmBadPointer;
      v5 = Flags | 0xF0000;
      Alignment->ChildRefCount = -892679478;
      if ( !v1 )
        v5 = v4;
      Alignment->Flags = v5;
      for ( i = Alignment->Context; i; i = i->Next )
        memset(i->ContextData, 202, i->Offset);
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
}
