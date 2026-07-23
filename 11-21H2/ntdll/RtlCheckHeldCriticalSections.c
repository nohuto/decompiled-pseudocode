/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x180084950
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x180084920 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlpGetStackTraceAddressEx @ 0x18001E340 (RtlpGetStackTraceAddressEx.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     RtlApplicationVerifierStop @ 0x1800E75E0 (RtlApplicationVerifierStop.c)
 */

void __fastcall RtlCheckHeldCriticalSections(HANDLE ThreadHandle, __int64 *a2)
{
  void *UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v6; // rsi
  __int64 v7; // r15
  __int64 *j; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  int *ThreadInformation; // [rsp+80h] [rbp-D8h] BYREF
  int v14; // [rsp+88h] [rbp-D0h]
  int v15; // [rsp+8Ch] [rbp-CCh]
  __int128 v16; // [rsp+90h] [rbp-C8h]
  __int128 v17; // [rsp+A0h] [rbp-B8h]
  __int64 v18; // [rsp+B0h] [rbp-A8h]
  __int128 v19; // [rsp+B8h] [rbp-A0h]
  __int128 v20; // [rsp+C8h] [rbp-90h]
  __int128 v21; // [rsp+D8h] [rbp-80h]
  _BYTE v22[24]; // [rsp+E8h] [rbp-70h] BYREF
  void *v23; // [rsp+100h] [rbp-58h]
  int v24; // [rsp+170h] [rbp+18h] BYREF
  void *v25; // [rsp+178h] [rbp+20h]

  v19 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v24 = 0;
  if ( RtlpCriticalSectionVerifier && !RtlpCsVerifyDoNotBreak && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( !NtCurrentTeb()->CountOfOwnedCriticalSections )
        return;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
      ThreadInformation = &v24;
      v15 = 4;
      v14 = 108;
      if ( ZwQueryInformationThread(ThreadHandle, ThreadTebInformation, &ThreadInformation, 0x10u, 0LL) < 0
        || !v24
        || ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, v22, 0x30u, 0LL) < 0 )
      {
        return;
      }
      UniqueThread = v23;
    }
    v25 = UniqueThread;
    RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
    for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
    {
      v6 = i - 2;
      v7 = (__int64)*(i - 1);
      if ( a2 )
      {
        for ( j = a2; ; ++j )
        {
          v9 = *j;
          if ( !*j )
            break;
          if ( v7 == v9 )
          {
            if ( v9 )
              goto LABEL_24;
            break;
          }
        }
      }
      v16 = *(_OWORD *)v7;
      v17 = *(_OWORD *)(v7 + 16);
      v18 = *(_QWORD *)(v7 + 32);
      if ( (_UNKNOWN **)v16 == v6 )
      {
        if ( (void *)v17 == UniqueThread )
        {
          StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v6 + 1), *((_WORD *)v6 + 22));
          RtlApplicationVerifierStop(
            512,
            (unsigned int)"Thread is in a state in which it cannot own a critical section",
            (_DWORD)UniqueThread,
            (unsigned int)"Thread identifier",
            v7,
            (__int64)"Critical section address",
            (__int64)(i - 2),
            (__int64)"Critical section debug info address",
            StackTraceAddress,
            (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
        }
      }
      else
      {
        v19 = *(_OWORD *)v16;
        v20 = *(_OWORD *)(v16 + 16);
        v21 = *(_OWORD *)(v16 + 32);
        v10 = RtlpGetStackTraceAddressEx(WORD1(v19), WORD6(v21));
        v11 = RtlpGetStackTraceAddressEx(*((_WORD *)i - 7), *((_WORD *)i + 14));
        RtlApplicationVerifierStop(
          515,
          (unsigned int)"double initialized or corrupted critical section",
          v7,
          (unsigned int)"Critical section address.",
          (__int64)(i - 2),
          (__int64)"Address of the debug info found in the active list.",
          v11,
          (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
          v10,
          (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
      }
LABEL_24:
      ;
    }
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  }
}
