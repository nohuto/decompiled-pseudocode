/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C0112450
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F2A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123E0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112418 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124F0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  int v2; // edx
  int v3; // r9d
  struct _KEVENT v4; // [rsp+20h] [rbp-E8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+40h] [rbp-C8h] BYREF

  memset(&v5, 0, sizeof(v5));
  memset(&v4, 0, sizeof(v4));
  ndisInitializeNetPnPEvent(&v5, &v4);
  v5.NetPnPEvent.NetEvent = NetEventBindsComplete;
  WAIT_FOR_PROTO_MUTEX(this);
  ndisDeliverNetPnPEventSynchronously(this, 0LL, &v5);
  RELEASE_PROT_MUTEX(this);
  ndisDereferenceProtocol(this, v2, 0xCu, v3);
}
