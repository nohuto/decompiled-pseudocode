/*
 * XREFs of _tlgCreate1Sz_char @ 0x1403C431C
 * Callers:
 *     MiAgeWorkingSet @ 0x14025B770 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x14028DC4C (PopPlNotifyDeviceDState.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14034DD54 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x14035C630 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x14035D8F4 (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x140365240 (EtwTelemetryCoverageReport.c)
 *     KiTraceLogHeteroRundown @ 0x1403B060C (KiTraceLogHeteroRundown.c)
 *     CarEtwCrashEvent @ 0x1405D281C (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D2BAC (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D2E90 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061822C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140618388 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14061847C (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x140652A60 (MiLogWsEmptyControl.c)
 *     EtwpCoverageRecord @ 0x1407DD580 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140870760 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140870888 (PopBatteryCheckCompositeCapacity.c)
 *     PopAccountCbEnergyChange @ 0x140870928 (PopAccountCbEnergyChange.c)
 *     NtCreateIoRing @ 0x14094A0B0 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x14098C974 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098EC1C (PopDiagTraceExecutePowerAction.c)
 *     PopAccountBatteryEnergyChange @ 0x140994AC0 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1409A8344 (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F524 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3049C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x140A38AFC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38F58 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B75990 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, const CHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &Src;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
