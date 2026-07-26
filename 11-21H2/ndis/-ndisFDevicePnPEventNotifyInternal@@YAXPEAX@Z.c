/*
 * XREFs of ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C005FD70
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C002533C (-ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     NdisFDevicePnPEventNotify @ 0x1C00629F0 (NdisFDevicePnPEventNotify.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A9BF8 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C010C190 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C0121824 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdx
  struct _NET_DEVICE_PNP_EVENT *v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_FILTER_BLOCK *LowerFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v5; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v2 = (struct _NET_DEVICE_PNP_EVENT *)Parameter[3];
  Miniport = v1->Miniport;
  LowerFilterWithPnpRef = ndisGetLowerFilterWithPnpRef(Miniport, v1, 5u);
  v5 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( LowerFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, v2);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, v2);
    ndisDereferenceRef(&v5->PnPRef.SpinLock, 5u);
  }
  else if ( Miniport->MajorNdisVersion >= 6u )
  {
    if ( (Miniport->Flags & 0x80u) == 0 && SLOBYTE(Miniport->DriverHandle->Flags) >= 0 )
    {
      if ( Miniport->SelectiveSuspend )
        ndisWdmSetBusySync(Miniport, 37LL, 0LL);
      ndisMInvokeDevicePnPEventNotifyHandler(Miniport, v2);
      if ( Miniport->SelectiveSuspend )
        ndisClearBusy(Miniport, 1LL, 37LL);
    }
  }
  else
  {
    PnPEventNotifyHandler = Miniport->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(
        Miniport->MiniportAdapterContext,
        v2->DevicePnPEvent,
        v2->InformationBuffer,
        v2->InformationBufferLength);
  }
}
