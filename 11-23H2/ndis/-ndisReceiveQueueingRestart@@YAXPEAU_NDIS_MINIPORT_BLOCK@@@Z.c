/*
 * XREFs of ?ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AB97C
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01477A0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingRestart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  a1->PeriodicReceiveQueue.Paused = 0;
  if ( byte_1C00F5201 == 1
    && dword_1C00F5204 != -1
    && a1->PeriodicReceiveQueue.BoundToIP
    && a1->MediaType == NdisMedium802_3 )
  {
    a1->PeriodicReceiveQueue.State = PeriodicReceivesOn;
  }
}
