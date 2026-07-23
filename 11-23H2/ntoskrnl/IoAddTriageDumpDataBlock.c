/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14038849C
 * Callers:
 *     IopCheckDeviceAndDriver @ 0x1402AF2E0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF6D0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B0040 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B03B0 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x140302A10 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D9C0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoGetDeviceInstanceName @ 0x140321FA8 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceRelations @ 0x140359130 (IoInvalidateDeviceRelations.c)
 *     IopDecrementDeviceObjectRefCount @ 0x140369894 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceState @ 0x1403A7DE0 (IoInvalidateDeviceState.c)
 *     KiMarkBugCheckRegions @ 0x1403E4364 (KiMarkBugCheckRegions.c)
 *     sub_1403F32CC @ 0x1403F32CC (sub_1403F32CC.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1405488B8 (HvlpInitializeHvCrashdumpPhase2.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140552134 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405541A4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055C118 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055C180 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055C240 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055C3DC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055C498 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055C5A0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C690 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055C80C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055C90C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C9A0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x140560490 (IoRequestDeviceEjectEx.c)
 *     PiProcessDeviceResetAction @ 0x140560798 (PiProcessDeviceResetAction.c)
 *     PnpSaveGlobalsToMinidump @ 0x140560D80 (PnpSaveGlobalsToMinidump.c)
 *     PnpWatchdogBugcheck @ 0x140560DD4 (PnpWatchdogBugcheck.c)
 *     KiCollectFullProcessName @ 0x14056A30C (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x14056A354 (KiCollectTriageDumpDataBlocks.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x14056B124 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiRecordRecoveryFailure @ 0x14057B7C0 (KiRecordRecoveryFailure.c)
 *     PopInternalAddToDumpFile @ 0x140583650 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x14058370C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x140583884 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140611048 (WheapAddToDumpFile.c)
 *     MiAddTriageDumpPtes @ 0x14062FDB4 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140630CFC (MmSnapTriageDumpInformation.c)
 *     IoGetDeviceInterfaces @ 0x1406878A0 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     IoDisconnectInterrupt @ 0x14078E3C0 (IoDisconnectInterrupt.c)
 *     IopDestroyDeviceNode @ 0x14078E6C0 (IopDestroyDeviceNode.c)
 *     IopConnectInterrupt @ 0x14078E950 (IopConnectInterrupt.c)
 *     PiDmaGuardProcessPreStart @ 0x140790F04 (PiDmaGuardProcessPreStart.c)
 *     IoGetDevicePropertyData @ 0x1407911D0 (IoGetDevicePropertyData.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407957FC (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407FCD80 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407FCE24 (PiIommuGetInterface.c)
 *     IoGetDmaAdapter @ 0x140828340 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140828438 (PiGetDmaAdapterFromBusInterface.c)
 *     IoSetDevicePropertyData @ 0x140866840 (IoSetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x140868C98 (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x140869FC4 (PiDmaGuardProcessPostRemove.c)
 *     PiQueryPowerRelations @ 0x14086EDB4 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086F11C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoReportTargetDeviceChange @ 0x140881F50 (IoReportTargetDeviceChange.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409526A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140952970 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140952BC0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetDeviceObjectLocation @ 0x140953154 (PipGetDeviceObjectLocation.c)
 *     PipGetPersistentMemory @ 0x140953568 (PipGetPersistentMemory.c)
 *     IoAssignResources @ 0x140953D80 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140954070 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140956D60 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140956F50 (IoReportResourceUsage.c)
 *     IoRequestDeviceRemovalForReset @ 0x140957430 (IoRequestDeviceRemovalForReset.c)
 *     IopMarkDeviceToBeReset @ 0x140957670 (IopMarkDeviceToBeReset.c)
 *     IopQueueDeviceResetEvent @ 0x1409577EC (IopQueueDeviceResetEvent.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14096B08C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmaGuardBlockAddDevice @ 0x14096B34C (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14096B678 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x14096B950 (PipDmgRequestUpdateConsoleLockState.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x140AA3E20 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA5854 (PopWriteHiberPages.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     ExpInitializeBootEnvironment @ 0x140B53330 (ExpInitializeBootEnvironment.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x14038851C (IopAddTriageDumpDataBlock.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A82E0 (KeAddTriageDumpDataBlock.c)
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
