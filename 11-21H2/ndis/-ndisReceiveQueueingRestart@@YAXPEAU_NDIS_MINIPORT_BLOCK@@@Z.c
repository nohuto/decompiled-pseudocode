/*
 * XREFs of ?ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A52B4
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013B378 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingRestart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  a1->PeriodicReceiveQueue.Paused = 0;
  if ( byte_1C00EC241 == 1
    && dword_1C00EC244 != -1
    && a1->PeriodicReceiveQueue.BoundToIP
    && a1->MediaType == NdisMedium802_3 )
  {
    a1->PeriodicReceiveQueue.State = PeriodicReceivesOn;
  }
}
