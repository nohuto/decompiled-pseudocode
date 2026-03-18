/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x140594B7C
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1405842D0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140985038 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 7u, a2);
  }
}
