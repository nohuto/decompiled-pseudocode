/*
 * XREFs of _tlgCreate1Sz_char @ 0x1403C3CBC
 * Callers:
 *     MiAgeWorkingSet @ 0x14025B650 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x14028DB2C (PopPlNotifyDeviceDState.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14034D754 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x14035BFE0 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x14035D2A4 (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x140364BF0 (EtwTelemetryCoverageReport.c)
 *     KiTraceLogHeteroRundown @ 0x1403AFF7C (KiTraceLogHeteroRundown.c)
 *     CarEtwCrashEvent @ 0x1405D28AC (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D2C3C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D2F20 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061829C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406183F8 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406184EC (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x140652AD0 (MiLogWsEmptyControl.c)
 *     EtwpCoverageRecord @ 0x1407DDB00 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140870C30 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140870D58 (PopBatteryCheckCompositeCapacity.c)
 *     PopAccountCbEnergyChange @ 0x140870DF8 (PopAccountCbEnergyChange.c)
 *     NtCreateIoRing @ 0x14094A160 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x14098CA24 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098ECCC (PopDiagTraceExecutePowerAction.c)
 *     PopAccountBatteryEnergyChange @ 0x140994B70 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1409A83F4 (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F594 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3050C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x140A38B6C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38FC8 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B7693C (MiFlushStrongCodeDriverLoadFailures.c)
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
