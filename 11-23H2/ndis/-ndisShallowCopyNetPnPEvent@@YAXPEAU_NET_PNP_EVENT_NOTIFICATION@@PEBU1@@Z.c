/*
 * XREFs of ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1C011207C
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0014E1C (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015060 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00157DC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisMNetPnPEvent @ 0x1C007FF10 (NdisMNetPnPEvent.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C014B36C (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisShallowCopyNetPnPEvent(
        struct _NET_PNP_EVENT_NOTIFICATION *a1,
        const struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int *p_Flags; // r8
  unsigned int SwitchId; // eax

  a1->Header.Type = a2->Header.Type;
  a1->Header.Revision = a2->Header.Revision;
  a1->Header.Size = a2->Header.Size;
  a1->PortNumber = a2->PortNumber;
  if ( a2->Header.Revision < 2u || a2->Header.Size < 0xACu )
  {
    p_Flags = &a2->Flags;
    if ( (a2->Flags & 4) == 0 )
    {
      SwitchId = 0;
      a1->VPortId = 0;
      goto LABEL_5;
    }
  }
  else
  {
    p_Flags = &a2->Flags;
  }
  a1->VPortId = a2->VPortId;
  SwitchId = a2->SwitchId;
LABEL_5:
  a1->SwitchId = SwitchId;
  a1->Flags = *p_Flags;
  a1->NetPnPEvent = a2->NetPnPEvent;
}
