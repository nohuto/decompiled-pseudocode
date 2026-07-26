/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BDAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C006E600 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNdisPackets(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rax
  __int64 v3; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  struct _NDIS_PACKET *v7; // [rsp+38h] [rbp+10h] BYREF
  struct _NDIS_STACK_RESERVED *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    v2 = a2;
    v6 = 0;
    v8 = 0LL;
    v3 = a1[9];
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v2->Link.Alignment;
      ndisXlateSendCompleteNetBufferListToPacket(v2, &v7, &v6);
      NDIS_STACK_RESERVED_FROM_PACKET(v7, &v8);
      *((_DWORD *)v8 + 2) = 0;
      v5 = (unsigned int)v6;
      --*(_DWORD *)&v7[-1].ProtocolReserved[4];
      (*(void (__fastcall **)(__int64, _QWORD, struct _NDIS_PACKET *))(v3 + 48))(v5, *(_QWORD *)(v3 + 24), v7);
      v2 = Alignment;
    }
    while ( Alignment );
  }
}
