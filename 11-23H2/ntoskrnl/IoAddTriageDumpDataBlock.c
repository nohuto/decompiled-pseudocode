/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1403882BC
 * Callers:
 *     IopCheckDeviceAndDriver @ 0x1402AF050 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF440 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFDB0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B0120 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x140302780 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D730 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoGetDeviceInstanceName @ 0x140321D18 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x140358F90 (IoInvalidateDeviceRelations.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403696F4 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceState @ 0x1403A7C00 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403E4184 (KiMarkBugCheckRegions.c)
 *     sub_1403F30EC @ 0x1403F30EC (sub_1403F30EC.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1405481F8 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551A74 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140553AE4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055BA58 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055BAC0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055BB80 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055BD1C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055BDD8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055BEE0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055BFD0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055C14C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055C24C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C2E0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14055FDD0 (IoRequestDeviceEjectEx.c)
 *     PiProcessDeviceResetAction @ 0x1405600D8 (PiProcessDeviceResetAction.c)
 *     PnpSaveGlobalsToMinidump @ 0x1405606C0 (PnpSaveGlobalsToMinidump.c)
 *     PnpWatchdogBugcheck @ 0x140560714 (PnpWatchdogBugcheck.c)
 *     KiCollectFullProcessName @ 0x140569C4C (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140569C94 (KiCollectTriageDumpDataBlocks.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x14056AA64 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14057B2D0 (KiRecordRecoveryFailure.c)
 *     PopInternalAddToDumpFile @ 0x140583160 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x14058321C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x140583394 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140610AF8 (WheapAddToDumpFile.c)
 *     MiAddTriageDumpPtes @ 0x14062F864 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1406307AC (MmSnapTriageDumpInformation.c)
 *     IoGetDeviceInterfaces @ 0x1406878A0 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     IoDisconnectInterrupt @ 0x14078E1D0 (IoDisconnectInterrupt.c)
 *     IopDestroyDeviceNode @ 0x14078E4D0 (IopDestroyDeviceNode.c)
 *     IopConnectInterrupt @ 0x14078E760 (IopConnectInterrupt.c)
 *     PiDmaGuardProcessPreStart @ 0x140790D14 (PiDmaGuardProcessPreStart.c)
 *     IoGetDevicePropertyData @ 0x140790FE0 (IoGetDevicePropertyData.c)
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14079560C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407FCAB0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407FCB54 (PiIommuGetInterface.c)
 *     IoGetDmaAdapter @ 0x140828040 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140828138 (PiGetDmaAdapterFromBusInterface.c)
 *     IoSetDevicePropertyData @ 0x140866600 (IoSetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x140869D84 (PiDmaGuardProcessPostRemove.c)
 *     PiQueryPowerRelations @ 0x14086EB74 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086EEDC (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoReportTargetDeviceChange @ 0x140881D10 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409524A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140952770 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x1409529C0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x140952F54 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x140953368 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140953B80 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140953E70 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140956B60 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140956D50 (IoReportResourceUsage.c)
 *     IoRequestDeviceRemovalForReset @ 0x140957230 (IoRequestDeviceRemovalForReset.c)
 *     IopMarkDeviceToBeReset @ 0x140957470 (IopMarkDeviceToBeReset.c)
 *     IopQueueDeviceResetEvent @ 0x1409575EC (IopQueueDeviceResetEvent.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14096AE8C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmaGuardBlockAddDevice @ 0x14096B14C (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14096B478 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x14096B750 (PipDmgRequestUpdateConsoleLockState.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x140AA3FB0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA59E4 (PopWriteHiberPages.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     ExpInitializeBootEnvironment @ 0x140B53330 (ExpInitializeBootEnvironment.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x14038833C (IopAddTriageDumpDataBlock.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A8100 (KeAddTriageDumpDataBlock.c)
 */

char __fastcall IoAddTriageDumpDataBlock(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+38h] [rbp-10h]

  v7[0] = IopNumTriageDumpDataBlocks;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = &IopTriageDumpDataBlocks;
  v4 = IopAddTriageDumpDataBlock(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  IopNumTriageDumpDataBlocks = v7[0];
  if ( IopTriageDumpDataArray )
    KeAddTriageDumpDataBlock(IopTriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
