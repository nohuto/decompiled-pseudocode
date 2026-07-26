/*
 * XREFs of ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C00251E8
 * Callers:
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007A2F4 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C013EEF8 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C002533C (-ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     NdisFDevicePnPEventNotify @ 0x1C00629F0 (NdisFDevicePnPEventNotify.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A9BF8 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C010C190 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C0121824 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 */

void __fastcall ndisDevicePnPEventNotifyMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_DEVICE_PNP_EVENT a2,
        void *a3,
        unsigned int a4)
{
  struct _NDIS_FILTER_BLOCK *LowerFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v9; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  __int64 v11; // [rsp+30h] [rbp-50h]
  struct _NET_DEVICE_PNP_EVENT NetDevicePnPEvent; // [rsp+40h] [rbp-40h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x10u,
      (struct _GUID *)&WPP_5bedcaa04221382d8c44769b0ae4b3c6_Traceguids,
      (char)a1,
      a2);
  *(_OWORD *)&NetDevicePnPEvent.Header.Type = 0LL;
  memset(NetDevicePnPEvent.NdisReserved, 0, 20);
  NetDevicePnPEvent.Header = (_NDIS_OBJECT_HEADER)3146112;
  NetDevicePnPEvent.DevicePnPEvent = a2;
  NetDevicePnPEvent.InformationBuffer = a3;
  NetDevicePnPEvent.InformationBufferLength = a4;
  LowerFilterWithPnpRef = ndisGetLowerFilterWithPnpRef(a1, 0LL, FPNPREF_DPNPNOTIFYM);
  v9 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( LowerFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    ndisDereferenceRef(&v9->PnPRef.SpinLock, 6u);
  }
  else if ( a1->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(a1->MiniportAdapterContext, a2, a3, a4);
  }
  else if ( (a1->Flags & 0x80u) == 0 && SLOBYTE(a1->DriverHandle->Flags) >= 0 )
  {
    if ( a1->SelectiveSuspend )
      ndisWdmSetBusySync(a1, 37LL, 0LL);
    ndisMInvokeDevicePnPEventNotifyHandler(a1, &NetDevicePnPEvent);
    if ( a1->SelectiveSuspend )
      ndisClearBusy(a1, 1LL, 37LL);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x11u,
      (struct _GUID *)&WPP_5bedcaa04221382d8c44769b0ae4b3c6_Traceguids,
      (char)a1,
      v11);
  }
}
