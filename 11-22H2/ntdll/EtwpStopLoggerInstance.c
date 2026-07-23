/*
 * XREFs of EtwpStopLoggerInstance @ 0x1800625A4
 * Callers:
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180062480 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x18005E6E0 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x1800612EC (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1800613AC (EtwpDisableTraceProviders.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 312), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(_DWORD *)(a1 + 20));
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
