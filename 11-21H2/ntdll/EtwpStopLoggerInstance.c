/*
 * XREFs of EtwpStopLoggerInstance @ 0x1800909A0
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x1800045A0 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x18000730C (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x180090A24 (EtwpDisableTraceProviders.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 312), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 544);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 64));
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
