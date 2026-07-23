/*
 * XREFs of PsGetProcessId @ 0x1402FA720
 * Callers:
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14068190C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PsOpenProcess @ 0x1406F3D30 (PsOpenProcess.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140763608 (WbDispatchOperation.c)
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1407B2FCC (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B7488 (EtwTraceWorkingSetSwap.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 *     TtmpCloseTerminalHandle @ 0x1409AB960 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1409ABAE0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409AC620 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409AC720 (TtmpOpenQueueHandle.c)
 *     EtwpObjectHandleRundown @ 0x1409EF608 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140A082D0 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B3D4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140A38968 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A38DAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A39208 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A397EC (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A39960 (MiLogHotPatchRundown.c)
 *     EtwTraceSystemTimeChange @ 0x140AAA5E0 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
