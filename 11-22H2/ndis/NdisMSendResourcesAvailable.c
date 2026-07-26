/*
 * XREFs of NdisMSendResourcesAvailable @ 0x1C00C89B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C006CFEC (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 */

void __fastcall NdisMSendResourcesAvailable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0xAu,
      (struct _GUID *)&WPP_51ab2d8c499231d359effe6bcd859c62_Traceguids,
      a1);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->Flags |= 0x400000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  if ( a1->FirstPendingPacket )
  {
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMQueueWorkItem(a1, NdisWorkItemSend, 0LL);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0xBu,
      (struct _GUID *)&WPP_51ab2d8c499231d359effe6bcd859c62_Traceguids,
      a1);
}
