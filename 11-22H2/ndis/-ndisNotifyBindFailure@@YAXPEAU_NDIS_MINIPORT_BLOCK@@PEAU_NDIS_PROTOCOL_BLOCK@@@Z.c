/*
 * XREFs of ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0033468
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120720 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123E0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112418 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124F0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 */

void __fastcall ndisNotifyBindFailure(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  _NET_LUID_LH v4; // rax
  struct _KEVENT v5; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v6; // [rsp+60h] [rbp-A0h] BYREF
  int v7; // [rsp+110h] [rbp+10h] BYREF
  int v8; // [rsp+114h] [rbp+14h]
  _NET_LUID_LH v9; // [rsp+118h] [rbp+18h]

  memset(&v6, 0, sizeof(v6));
  v8 = 0;
  memset(&v5, 0, sizeof(v5));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      6u,
      0x56u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)a1,
      a2);
  if ( a2->MajorNdisVersion > 6u || a2->MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(&v6, &v5);
    v4.Value = (ULONG64)a1->NetLuid;
    v8 = 0;
    v9.Value = v4.Value;
    v6.NetPnPEvent.NetEvent = NetEventBindFailed;
    v6.NetPnPEvent.BufferLength = 16;
    v6.NetPnPEvent.Buffer = &v7;
    v7 = 1048960;
    WAIT_FOR_PROTO_MUTEX(a2);
    ndisDeliverNetPnPEventSynchronously(a2, 0LL, &v6);
    RELEASE_PROT_MUTEX(a2);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        6u,
        0x57u,
        (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
        (char)a1,
        a2);
  }
}
