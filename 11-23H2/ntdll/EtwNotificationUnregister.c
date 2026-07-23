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

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  _RTL_BALANCED_NODE *v7; // rcx

  v4 = ProviderHandleLookup(RegHandle, (unsigned int)RegHandle);
  v5 = v4;
  if ( !v4 || WORD2(RegHandle) != *(_WORD *)(v4 + 84) )
    v5 = 0LL;
  if ( !v5 || !WORD2(RegHandle) || v5 == PrivateLoggerNotificationEntry )
    goto LABEL_16;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
  if ( v5 != ProviderHandleLookup(v6, (unsigned int)RegHandle)
    || WORD2(RegHandle) != _InterlockedCompareExchange16((volatile signed __int16 *)(v5 + 84), 0, SWORD2(RegHandle)) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
LABEL_16:
    RtlSetLastWin32Error(6);
    return 6;
  }
  ProviderHandleRemove();
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v5);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v5 + 72));
  if ( (*(_WORD *)(v5 + 86) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v5 + 88));
  v7 = *(_RTL_BALANCED_NODE **)(v5 + 240);
  if ( v7 )
  {
    EtwpDereferenceUmGuidEntry(v7);
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v5 + 56);
  EtwpFreeRegistration(v5);
  return 0;
}
