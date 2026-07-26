/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01063B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001CC34 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106340 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106378 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01066C4 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  struct _KEVENT v5; // [rsp+20h] [rbp-E8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v6; // [rsp+40h] [rbp-C8h] BYREF

  memset(&v6, 0, sizeof(v6));
  memset(&v5, 0, sizeof(v5));
  ndisInitializeNetPnPEvent(&v6, &v5);
  v6.NetPnPEvent.NetEvent = NetEventBindsComplete;
  WAIT_FOR_PROTO_MUTEX(this);
  ndisDeliverNetPnPEventSynchronously(this, 0LL, &v6);
  RELEASE_PROT_MUTEX(this);
  LOBYTE(v2) = 12;
  ndisDereferenceProtocol(this, v3, v2, v4);
}
