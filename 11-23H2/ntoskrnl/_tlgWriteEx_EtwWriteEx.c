/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x140367F70
 * Callers:
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     MiLogProcessWorkingSetsStop @ 0x140220530 (MiLogProcessWorkingSetsStop.c)
 *     MiAgeWorkingSet @ 0x14025B770 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x14028DC4C (PopPlNotifyDeviceDState.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140314DE8 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14034DD54 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x14035C630 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x14035D8F4 (MiLogTrimWs.c)
 *     PopPlRegisterComponent @ 0x140397060 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403974F4 (PopPlRegisterDevice.c)
 *     MiStoreLogNotCandidate @ 0x14046D892 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404FEDD0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1405924F8 (PopDiagTraceDIrpAfterSx.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405A1410 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405A15E8 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405A1700 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x1405A1894 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x1405A1A40 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405F9938 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1405F9A7C (VmpLogAccessFaultRange.c)
 *     VmpLogColdHint @ 0x1405F9BE0 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405F9CD4 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405F9DCC (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405F9ECC (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061822C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140618388 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14061847C (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x14061B90C (MiLogAddPhysicalMemory.c)
 *     MiLogBadMapper @ 0x140630DF8 (MiLogBadMapper.c)
 *     MiLogWsEmptyControl @ 0x140652A60 (MiLogWsEmptyControl.c)
 *     MiLogNotifyPageHeat @ 0x140653F2C (MiLogNotifyPageHeat.c)
 *     MiStoreLogFullPagefile @ 0x14065C304 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14065C374 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14065C410 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14065C4D0 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14065C620 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14065D124 (MmStoreLogCorruptionFixed.c)
 *     MiLogReserveVaFailed @ 0x140A2E8A4 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F524 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3049C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140A386B8 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A38AFC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38F58 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A3953C (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x140A43954 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B75990 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
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
