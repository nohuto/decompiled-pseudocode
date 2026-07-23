/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x140368110
 * Callers:
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     MiLogProcessWorkingSetsStop @ 0x140220530 (MiLogProcessWorkingSetsStop.c)
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x14028DEDC (PopPlNotifyDeviceDState.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140315078 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14034DEF4 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x14035C7D0 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x14035DA94 (MiLogTrimWs.c)
 *     PopPlRegisterComponent @ 0x140397240 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403976D4 (PopPlRegisterDevice.c)
 *     MiStoreLogNotCandidate @ 0x14046DC92 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404FF320 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1405929E8 (PopDiagTraceDIrpAfterSx.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405A1900 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405A1AD8 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405A1BF0 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x1405A1D84 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x1405A1F30 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405F9EA8 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1405F9FEC (VmpLogAccessFaultRange.c)
 *     VmpLogColdHint @ 0x1405FA150 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405FA244 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405FA33C (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405FA43C (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061877C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406188D8 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406189CC (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x14061BE5C (MiLogAddPhysicalMemory.c)
 *     MiLogBadMapper @ 0x140631348 (MiLogBadMapper.c)
 *     MiLogWsEmptyControl @ 0x140652FB0 (MiLogWsEmptyControl.c)
 *     MiLogNotifyPageHeat @ 0x14065447C (MiLogNotifyPageHeat.c)
 *     MiStoreLogFullPagefile @ 0x14065C854 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14065C8C4 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14065C960 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14065CA20 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14065CB70 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14065D674 (MmStoreLogCorruptionFixed.c)
 *     MiLogReserveVaFailed @ 0x140A2EB54 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F7D4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3074C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140A38968 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A38DAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A39208 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A397EC (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A39960 (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x140A43C04 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B75990 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall tlgWriteEx_EtwWriteEx(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        ULONG a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  EVENT_DESCRIPTOR v9; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v9.Keyword = *(_QWORD *)(a2 + 3);
  a8->Ptr = *(_QWORD *)(a1 + 8);
  a8->Size = **(unsigned __int16 **)(a1 + 8);
  a8[1].Ptr = (ULONGLONG)(a2 + 11);
  a8->Reserved = 2;
  a8[1].Size = *(unsigned __int16 *)(a2 + 11);
  a8[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v9, 0LL, a4, 0LL, 0LL, UserDataCount, a8);
}
