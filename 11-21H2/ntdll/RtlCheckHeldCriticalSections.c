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

struct _PEB *__fastcall RtlCheckHeldCriticalSections(__int64 a1, __int64 *a2)
{
  struct _PEB *result; // rax
  void *UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v7; // rsi
  __int64 v8; // r15
  __int64 *j; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  int *v14; // [rsp+80h] [rbp-D8h] BYREF
  int v15; // [rsp+88h] [rbp-D0h]
  int v16; // [rsp+8Ch] [rbp-CCh]
  __int128 v17; // [rsp+90h] [rbp-C8h]
  __int128 v18; // [rsp+A0h] [rbp-B8h]
  __int64 v19; // [rsp+B0h] [rbp-A8h]
  __int128 v20; // [rsp+B8h] [rbp-A0h]
  __int128 v21; // [rsp+C8h] [rbp-90h]
  __int128 v22; // [rsp+D8h] [rbp-80h]
  _BYTE v23[24]; // [rsp+E8h] [rbp-70h] BYREF
  void *v24; // [rsp+100h] [rbp-58h]
  int v25; // [rsp+170h] [rbp+18h] BYREF
  void *v26; // [rsp+178h] [rbp+20h]

  v20 = 0LL;
  v22 = 0LL;
  result = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v25 = 0;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
      {
        if ( a1 == -2 )
        {
          result = (struct _PEB *)NtCurrentTeb();
          if ( !HIDWORD(result->ApiSetMap) )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          v14 = &v25;
          v16 = 4;
          v15 = 108;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v14, 16LL, 0LL);
          if ( (int)result < 0 )
            return result;
          if ( !v25 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, v23, 48LL, 0LL);
          if ( (int)result < 0 )
            return result;
          UniqueThread = v24;
        }
        v26 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
        {
          v7 = i - 2;
          v8 = (__int64)*(i - 1);
          if ( a2 )
          {
            for ( j = a2; ; ++j )
            {
              v10 = *j;
              if ( !*j )
                break;
              if ( v8 == v10 )
              {
                if ( v10 )
                  goto LABEL_24;
                break;
              }
            }
          }
          v17 = *(_OWORD *)v8;
          v18 = *(_OWORD *)(v8 + 16);
          v19 = *(_QWORD *)(v8 + 32);
          if ( (_UNKNOWN **)v17 == v7 )
          {
            if ( (void *)v18 == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v7 + 1), *((_WORD *)v7 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v8,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            v20 = *(_OWORD *)v17;
            v21 = *(_OWORD *)(v17 + 16);
            v22 = *(_OWORD *)(v17 + 32);
            v11 = RtlpGetStackTraceAddressEx(WORD1(v20), WORD6(v22));
            v12 = RtlpGetStackTraceAddressEx(*((_WORD *)i - 7), *((_WORD *)i + 14));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v8,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v12,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v11,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
