/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C000F284
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000DD10 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C000F1F0 (Bulk_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C0013470 (Control_EP_StartMapping.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0042360 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0042490 (Control_EP_ReclaimTransfers.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0043160 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00432F0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0044150 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C0044260 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C0045500 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00455D0 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0045B40 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0045CD0 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C0046CE0 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0047410 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 280) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 88));
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 896))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 80));
}
