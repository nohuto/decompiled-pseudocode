/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x140367920
 * Callers:
 *     MiProcessWorkingSets @ 0x14021FA30 (MiProcessWorkingSets.c)
 *     MiLogProcessWorkingSetsStop @ 0x140220550 (MiLogProcessWorkingSetsStop.c)
 *     MiAgeWorkingSet @ 0x14025B650 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x14028DB2C (PopPlNotifyDeviceDState.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140314C08 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14034D754 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x14035BFE0 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x14035D2A4 (MiLogTrimWs.c)
 *     PopPlRegisterComponent @ 0x1403954E0 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x140395974 (PopPlRegisterDevice.c)
 *     MiStoreLogNotCandidate @ 0x14046D232 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404FEEE0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140592588 (PopDiagTraceDIrpAfterSx.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405A14A0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405A1678 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405A1790 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x1405A1924 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x1405A1AD0 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405F99C8 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1405F9B0C (VmpLogAccessFaultRange.c)
 *     VmpLogColdHint @ 0x1405F9C70 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405F9D64 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405F9E5C (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405F9F5C (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061829C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406183F8 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406184EC (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x14061B97C (MiLogAddPhysicalMemory.c)
 *     MiLogBadMapper @ 0x140630E68 (MiLogBadMapper.c)
 *     MiLogWsEmptyControl @ 0x140652AD0 (MiLogWsEmptyControl.c)
 *     MiLogNotifyPageHeat @ 0x140653F9C (MiLogNotifyPageHeat.c)
 *     MiStoreLogFullPagefile @ 0x14065C374 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14065C3E4 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14065C480 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14065C540 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14065C690 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14065D194 (MmStoreLogCorruptionFixed.c)
 *     MiLogReserveVaFailed @ 0x140A2E914 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F594 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3050C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140A38728 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A38B6C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38FC8 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A395AC (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x140A439C4 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B7693C (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
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
