/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180127DD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrRegisterDllNotification @ 0x180001F30 (LdrRegisterDllNotification.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DB1C (RtlpTpResumeImpersonation.c)
 *     RtlpTpIoLookup @ 0x18012820C (RtlpTpIoLookup.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || (_DWORD)a3 )
    return 3221225485LL;
  v6 = RtlpTpRevertCapture(&v10, 0, a3);
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
      v6 = LdrRegisterDllNotification(0, (__int64)RtlpTpIoDllNotification, 0LL, &RtlpTpIoDllNotificationCookie);
      v7 = RtlpTpIoRegistered;
      if ( v6 >= 0 )
        v7 = 1;
      RtlpTpIoRegistered = v7;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v6 >= 0 )
    {
LABEL_13:
      v6 = RtlpTpIoLookup(&v9, a2, a1);
      if ( v6 >= 0 )
      {
        v8 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v8 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v10);
  return (unsigned int)v6;
}
