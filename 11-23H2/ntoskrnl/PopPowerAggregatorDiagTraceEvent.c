/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1407A9B30
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1407A993C (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorWorker @ 0x140874BC0 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874C48 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140878028 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993F0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopNotifyCsStateExited @ 0x140998000 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A1164 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v6; // rdi

  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v6, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
