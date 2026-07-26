/*
 * XREFs of ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x1C00049F0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C0005660 (NdisReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0006A00 (NdisFReturnNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C0007AD0 (NdisFSendNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0007F50 (NdisFSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

void __fastcall ndisNblPoisonScratchFields(struct _NET_BUFFER_LIST *a1)
{
  char v1; // si
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int Flags; // ecx
  _NET_BUFFER_LIST_CONTEXT *Context; // rdi
  unsigned int v5; // eax
  int v6; // ecx

  if ( a1 )
  {
    v1 = byte_1C00EE7A4;
    Alignment = a1;
    do
    {
      Flags = Alignment->Flags;
      Context = Alignment->Context;
      v1 = v1 == 0;
      v5 = Flags & 0xFFF0FFFF;
      Alignment->Scratch = MmBadPointer;
      v6 = Flags | 0xF0000;
      Alignment->ChildRefCount = -892679478;
      if ( !v1 )
        v6 = v5;
      Alignment->Flags = v6;
      while ( Context )
      {
        memset(Context->ContextData, 202, Context->Offset);
        Context = Context->Next;
      }
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    byte_1C00EE7A4 = v1;
  }
}
