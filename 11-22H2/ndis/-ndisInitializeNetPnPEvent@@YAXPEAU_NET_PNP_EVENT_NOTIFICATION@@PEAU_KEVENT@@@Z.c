/*
 * XREFs of ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0014C8C (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0014ED0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0033468 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005DFB4 (-ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C005E13C (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0063644 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     NdisIMNotifyPnPEvent @ 0x1C007FE60 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C007FEF0 (NdisMNetPnPEvent.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0080594 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0080C4C (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D874 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C010F7CC (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C0110AD0 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0111F14 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C0112450 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135E94 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014798C (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 */

void __fastcall ndisInitializeNetPnPEvent(struct _NET_PNP_EVENT_NOTIFICATION *a1, struct _KEVENT *a2)
{
  memset(a1, 0, sizeof(struct _NET_PNP_EVENT_NOTIFICATION));
  a1->Header = (_NDIS_OBJECT_HEADER)11272832;
  a1->NetPnPEvent.NetEvent = NetEventMaximum;
  if ( a2 )
  {
    KeInitializeEvent(a2, NotificationEvent, 0);
    a1->NetPnPEvent.NdisReserved[0] = (unsigned __int64)a2;
  }
}
