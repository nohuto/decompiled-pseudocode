/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1407A9940
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1407A974C (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorWorker @ 0x140874980 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874A08 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140877DE8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993D0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopNotifyCsStateExited @ 0x140997E00 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A0F64 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
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
