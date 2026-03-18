/*
 * XREFs of HvlNotifyLongSpinWait @ 0x1403CD2F0
 * Callers:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiWaitForContextSwap @ 0x140222CB8 (KiWaitForContextSwap.c)
 *     KiAddThreadToReadyQueue @ 0x1402348E0 (KiAddThreadToReadyQueue.c)
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     KiAddThreadToPrcbQueue @ 0x140238940 (KiAddThreadToPrcbQueue.c)
 *     KiChooseTargetProcessor @ 0x1402392E0 (KiChooseTargetProcessor.c)
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250F20 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140252030 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockOwnerShip @ 0x140260F20 (KxWaitForLockOwnerShip.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     MiGetVadWakeList @ 0x14028A170 (MiGetVadWakeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     ExpQueueWorkItem @ 0x1402B76A0 (ExpQueueWorkItem.c)
 *     KeRemovePriQueue @ 0x1402BF0B0 (KeRemovePriQueue.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C02F0 (KiIpiStallOnPacketTargetsPrcb.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiLockOwnedProtoPage @ 0x1402DD410 (MiLockOwnedProtoPage.c)
 *     KiIpiSendRequestEx @ 0x1402EB5F0 (KiIpiSendRequestEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316D70 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x14031A6D0 (KxWaitForLockChainValid.c)
 *     KiInitiateGenericCallDpc @ 0x140346EB4 (KiInitiateGenericCallDpc.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DCB0 (MiZeroPageCalibrateDpc.c)
 *     KiIdleLoop @ 0x1404239C0 (KiIdleLoop.c)
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1404602E8 (KxWaitForLockOwnerShipWithIrql.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD360 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallInitiateHypercall(65544LL, a1, 0LL);
}
