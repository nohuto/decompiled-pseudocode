/*
 * XREFs of EtwNotificationUnregister @ 0x180030010
 * Callers:
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18002F38C (SbObtainTraceHandle.c)
 *     EtwEventUnregister @ 0x18002FB00 (EtwEventUnregister.c)
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 *     SbCleanupTrace @ 0x1800518D0 (SbCleanupTrace.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007C61C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18007D790 (EtwUnregisterTraceGuids.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180081474 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D61D4 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D625C (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB7A0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwpRemoveRegistrationFromTable @ 0x18002FEE8 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpFreeRegistration @ 0x18002FF34 (EtwpFreeRegistration.c)
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x1800305B0 (ProviderHandleRemove.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18005EE80 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  v4 = ProviderHandleLookup(a1, (unsigned int)a1);
  v5 = v4;
  if ( !v4 || WORD2(a1) != *(_WORD *)(v4 + 84) )
    v5 = 0LL;
  if ( !v5 || !WORD2(a1) || v5 == PrivateLoggerNotificationEntry )
    goto LABEL_16;
  RtlAcquireSRWLockExclusive(v5 + 72);
  if ( v5 != ProviderHandleLookup(v6, (unsigned int)a1)
    || WORD2(a1) != _InterlockedCompareExchange16((volatile signed __int16 *)(v5 + 84), 0, SWORD2(a1)) )
  {
    RtlReleaseSRWLockExclusive(v5 + 72);
LABEL_16:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  ProviderHandleRemove();
  EtwpRemoveRegistrationFromTable((__m128i *)v5);
  RtlReleaseSRWLockExclusive(v5 + 72);
  if ( (*(_WORD *)(v5 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v5 + 88));
  if ( *(_QWORD *)(v5 + 240) )
  {
    EtwpDereferenceUmGuidEntry();
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v5 + 56);
  EtwpFreeRegistration(v5);
  return 0LL;
}
