/*
 * XREFs of EtwNotificationUnregister @ 0x1800301E0
 * Callers:
 *     SbSelectProcedure @ 0x18002F390 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18002F55C (SbObtainTraceHandle.c)
 *     EtwEventUnregister @ 0x18002FCD0 (EtwEventUnregister.c)
 *     LdrShutdownProcess @ 0x180051600 (LdrShutdownProcess.c)
 *     SbCleanupTrace @ 0x180051A30 (SbCleanupTrace.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18007D120 (EtwUnregisterTraceGuids.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180080E04 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6874 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D68FC (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DBDF0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwpRemoveRegistrationFromTable @ 0x1800300B8 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpFreeRegistration @ 0x180030104 (EtwpFreeRegistration.c)
 *     ProviderHandleLookup @ 0x180030720 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x180030780 (ProviderHandleRemove.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180061D10 (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
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
