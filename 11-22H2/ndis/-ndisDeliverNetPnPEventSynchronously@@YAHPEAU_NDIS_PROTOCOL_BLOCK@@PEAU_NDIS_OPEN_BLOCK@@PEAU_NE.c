/*
 * XREFs of ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124F0
 * Callers:
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0033468 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0063644 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C0112450 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C014B36C (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001ED9C (WPP_RECORDER_SF_qqLd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C010F788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112654 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0112824 (-ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NO.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B40 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NET_PNP_EVENT_NOTIFICATION *a3)
{
  unsigned int v3; // edi
  void *SpinLock; // rbx
  _NET_PNP_EVENT *p_NetPnPEvent; // r15
  int (__fastcall *PnPEventHandler)(void *, _NET_PNP_EVENT *); // r9
  struct _NDIS_PROTOCOL_BLOCK *v10; // rdx
  int v11; // eax
  struct NDISWATCHDOG__ *v12; // rbx
  int (__fastcall *v14)(void *, _NET_PNP_EVENT *); // rax
  struct NDISWATCHDOG__ *v15; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  if ( a2 )
    SpinLock = (void *)a2->Ref.SpinLock;
  else
    SpinLock = 0LL;
  p_NetPnPEvent = &a3->NetPnPEvent;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xEu,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      (char)a2,
      p_NetPnPEvent->NetEvent);
  if ( a1->MajorNdisVersion < 6u )
    PnPEventHandler = 0LL;
  else
    PnPEventHandler = a1->PnPEventHandler;
  v10 = a2;
  if ( !a2 )
    v10 = a1;
  ndisMakeWatchdog(&v15, v10, 2LL, PnPEventHandler, 270000, p_NetPnPEvent->NetEvent);
  if ( a1->MajorNdisVersion >= 6u )
  {
    v11 = ndisInvokeNetPnPEvent(a1, (struct _NDIS_OPEN_BLOCK *)a2, a3);
LABEL_11:
    v3 = v11;
    goto LABEL_12;
  }
  v14 = a1->PnPEventHandler;
  if ( v14 )
  {
    v11 = v14(SpinLock, p_NetPnPEvent);
    goto LABEL_11;
  }
LABEL_12:
  v12 = v15;
  if ( v3 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog(v15, (struct _KEVENT *)a3->NetPnPEvent.NdisReserved[0]);
    v3 = a3->NetPnPEvent.NdisReserved[1];
  }
  if ( v12 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v12);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xFu,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      (char)a2,
      p_NetPnPEvent->NetEvent,
      v3);
  return v3;
}
