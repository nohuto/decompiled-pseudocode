/*
 * XREFs of ?ndisReceiveQueueingPaused@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5290
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013B378 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingPaused(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v1; // zf

  v1 = a1->PeriodicReceiveQueue.State == PeriodicReceivesOn;
  a1->PeriodicReceiveQueue.Paused = 1;
  if ( v1 )
    a1->PeriodicReceiveQueue.State = PeriodicReceivesBlocked;
}
