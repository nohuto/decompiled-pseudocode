/*
 * XREFs of PsGetProcessId @ 0x1402FA490
 * Callers:
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14068190C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PsOpenProcess @ 0x1406F3D00 (PsOpenProcess.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140763418 (WbDispatchOperation.c)
 *     EtwpNotifyGuid @ 0x14077F9E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1407B2DDC (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B71A8 (EtwTraceWorkingSetSwap.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085FEF4 (EtwQueryPerformanceTraceInformation.c)
 *     TtmpCloseTerminalHandle @ 0x1409AB760 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1409AB8E0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409AC420 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409AC520 (TtmpOpenQueueHandle.c)
 *     EtwpObjectHandleRundown @ 0x1409EF378 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140A08020 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B124 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140A386B8 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A38AFC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38F58 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A3953C (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 *     EtwTraceSystemTimeChange @ 0x140AAA770 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
