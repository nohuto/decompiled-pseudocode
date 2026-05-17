/*
 * XREFs of EtwNotificationUnregister @ 0x1800065F0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x180006590 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800065E0 (EtwEventUnregister.c)
 *     SbSelectProcedure @ 0x18004E920 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180053E9C (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbCleanupTrace @ 0x180054AC8 (SbCleanupTrace.c)
 *     SbObtainTraceHandle @ 0x180086590 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6810 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D6898 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB8D0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwpFreeRegistration @ 0x180006708 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180006748 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180007B1C (EtwpDereferenceUmGuidEntry.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     ProviderHandleRemove @ 0x1800A3AC8 (ProviderHandleRemove.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx

  v3 = HIDWORD(a1);
  v4 = a1;
  v5 = ProviderHandleLookup(a1, (unsigned int)a1);
  v6 = v5;
  if ( !v5 || !(_WORD)v3 || (_WORD)v3 != *(_WORD *)(v5 + 96) || v5 == PrivateLoggerNotificationEntry )
    goto LABEL_15;
  v7 = v5 + 72;
  RtlAcquireSRWLockExclusive(v5 + 72);
  if ( v6 != ProviderHandleLookup(v8, v4)
    || (_WORD)v3 != _InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 96), 0, v3) )
  {
    RtlReleaseSRWLockExclusive(v7);
LABEL_15:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  ProviderHandleRemove();
  EtwpRemoveRegistrationFromTable(v6);
  RtlReleaseSRWLockExclusive(v7);
  if ( (*(_WORD *)(v6 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v6 + 88));
  if ( *(_QWORD *)(v6 + 248) )
  {
    EtwpDereferenceUmGuidEntry();
    *(_QWORD *)(v6 + 248) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v6 + 56);
  EtwpFreeRegistration(v6);
  return 0LL;
}
