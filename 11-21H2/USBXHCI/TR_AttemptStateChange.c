/*
 * XREFs of TR_AttemptStateChange @ 0x1C000A724
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_EvtDmaCallback @ 0x1C0009060 (Isoch_EvtDmaCallback.c)
 *     Isoch_MappingLoop @ 0x1C000A6A0 (Isoch_MappingLoop.c)
 *     Isoch_MapTransfers @ 0x1C000A788 (Isoch_MapTransfers.c)
 *     Bulk_EP_StopMapping @ 0x1C000CBC0 (Bulk_EP_StopMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000E7D0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapTransfers @ 0x1C000E85C (Bulk_MapTransfers.c)
 *     Bulk_MappingLoop @ 0x1C000E8C4 (Bulk_MappingLoop.c)
 *     Bulk_EvtDmaCallback @ 0x1C001A6F0 (Bulk_EvtDmaCallback.c)
 *     Isoch_EP_StopMapping @ 0x1C0042440 (Isoch_EP_StopMapping.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_AttemptStateChange(__int64 a1, signed __int32 a2, __int32 a3)
{
  unsigned __int32 v3; // ebx
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( a2 == 5 )
    v3 = _InterlockedExchange((volatile __int32 *)(a1 + 108), a3);
  else
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), a3, a2);
  if ( a2 == v3 || a2 == 5 )
  {
    if ( !a3 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(v5 + 37) )
        goto LABEL_13;
      goto LABEL_7;
    }
  }
  else if ( a2 == 3 && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v5 + 37) )
    {
LABEL_13:
      v6 = *(_QWORD *)(v5 + 136);
      if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 20)) != *(_DWORD *)(v6 + 8) )
        return v3;
    }
LABEL_7:
    ESM_AddEvent((KSPIN_LOCK *)(v5 + 288), 20);
  }
  return v3;
}
