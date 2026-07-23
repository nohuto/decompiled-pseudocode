/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180126920
 * Callers:
 *     <none>
 * Callees:
 *     LdrRegisterDllNotification @ 0x180001F00 (LdrRegisterDllNotification.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpRevertCapture @ 0x18004D9D0 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DC7C (RtlpTpResumeImpersonation.c)
 *     RtlpTpIoLookup @ 0x180126D5C (RtlpTpIoLookup.c)
 */

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  int v6; // ebx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  HANDLE TokenHandle; // [rsp+58h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !FileHandle || Flags )
    return -1073741811;
  v6 = RtlpTpRevertCapture(&TokenHandle, 0);
  if ( v6 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_13;
    RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( RtlpTpIoRegistered )
    {
      v6 = 0;
    }
    else
    {
      v6 = LdrRegisterDllNotification(
             0,
             (PLDR_DLL_NOTIFICATION_FUNCTION)RtlpTpIoDllNotification,
             0LL,
             &RtlpTpIoDllNotificationCookie);
      v7 = RtlpTpIoRegistered;
      if ( v6 >= 0 )
        v7 = 1;
      RtlpTpIoRegistered = v7;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v6 >= 0 )
    {
LABEL_13:
      v6 = RtlpTpIoLookup(&v9, CompletionProc, FileHandle);
      if ( v6 >= 0 )
      {
        v8 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v8 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v6;
}
