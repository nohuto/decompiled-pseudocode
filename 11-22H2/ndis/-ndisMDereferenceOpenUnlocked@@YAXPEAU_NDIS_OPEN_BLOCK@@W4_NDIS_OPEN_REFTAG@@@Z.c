/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024C34
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00086D0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisMCoOidRequestComplete @ 0x1C00406C0 (NdisMCoOidRequestComplete.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0083480 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C0083BEC (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0083DA8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A5C (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1C009275C (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C009CF30 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009FBD0 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B5630 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisMCoRequestComplete @ 0x1C00C14D0 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00C2D40 (ndisCoIndicateStatusInternal.c)
 *     ?ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C8170 (-ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CABE0 (-ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C01532B0 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x1C0157180 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F534 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1, unsigned __int8 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rsi
  KIRQL v5; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  ndisMDereferenceOpenLocked(a1, a2);
  v5 = NewIrql;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v5);
}
