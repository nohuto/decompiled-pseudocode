/*
 * XREFs of _tlgCreate1Sz_char @ 0x1403C44FC
 * Callers:
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x14028DEDC (PopPlNotifyDeviceDState.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14034DEF4 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x14035C7D0 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x14035DA94 (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x1403653E0 (EtwTelemetryCoverageReport.c)
 *     KiTraceLogHeteroRundown @ 0x1403B07EC (KiTraceLogHeteroRundown.c)
 *     CarEtwCrashEvent @ 0x1405D2D8C (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D311C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D3400 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061877C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406188D8 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406189CC (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x140652FB0 (MiLogWsEmptyControl.c)
 *     EtwpCoverageRecord @ 0x1407DD850 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1408709A0 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140870AC8 (PopBatteryCheckCompositeCapacity.c)
 *     PopAccountCbEnergyChange @ 0x140870B68 (PopAccountCbEnergyChange.c)
 *     NtCreateIoRing @ 0x14094A2B0 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x14098CB74 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098EE1C (PopDiagTraceExecutePowerAction.c)
 *     PopAccountBatteryEnergyChange @ 0x140994CC0 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F7D4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3074C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x140A38DAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A39208 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x140A39960 (MiLogHotPatchRundown.c)
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
