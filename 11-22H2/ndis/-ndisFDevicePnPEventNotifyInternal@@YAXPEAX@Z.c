/*
 * XREFs of ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0064CE0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0066A20 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C0023B90 (-ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EE2E (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     NdisFDevicePnPEventNotify @ 0x1C00679F0 (NdisFDevicePnPEventNotify.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF248 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF608 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C0117370 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C012D2DC (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdx
  struct _NET_DEVICE_PNP_EVENT *v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_FILTER_BLOCK *LowerFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v5; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  unsigned int Flags; // eax

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
    Flags = Miniport->Flags;
    if ( (Flags & 0x180) == 0 )
    {
      if ( Miniport->SelectiveSuspend )
      {
        if ( (Flags & 0x80u) == 0 )
          ndisWdmSetBusySync(Miniport, 37LL, 0LL);
        else
          ndisWdfSetBusySync(Miniport, 37LL, 0LL);
      }
      ndisMInvokeDevicePnPEventNotifyHandler(Miniport, v2);
      if ( Miniport->SelectiveSuspend )
        ndisClearBusy(Miniport, 1, 37);
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
