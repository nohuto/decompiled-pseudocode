/*
 * XREFs of ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C9B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C00739BC (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteToNdisPackets(_QWORD *a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  struct _NET_BUFFER_LIST *v3; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  struct _NDIS_PACKET *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v3 = a2;
  v6 = 0;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[73], 149LL, a3 & 1);
  do
  {
    Alignment = (struct _NET_BUFFER_LIST *)v3->Link.Alignment;
    v3->Link.Alignment = 0LL;
    ndisXlateSendCompleteNetBufferListToPacket(v3, &v7, &v6);
    if ( (v6 & 0xC0230000) == 0xC0230000 )
      v6 = (unsigned __int16)v6 | 0xC0010000;
    ((void (__fastcall *)(_QWORD *, struct _NDIS_PACKET *))a1[14])(a1, v7);
    v3 = Alignment;
  }
  while ( Alignment );
}
