/*
 * XREFs of TppCancelTimer @ 0x18001C7D8
 * Callers:
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TpWaitForTimer @ 0x18001F020 (TpWaitForTimer.c)
 *     TppWaitCompletion @ 0x18001FD80 (TppWaitCompletion.c)
 *     TpReleaseTimer @ 0x180070A70 (TpReleaseTimer.c)
 *     TppTimerpStopCallbackGeneration @ 0x18008CF90 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x18001D074 (TppPHDelete.c)
 *     TppUpdateSubQueueTimer @ 0x18001E8C8 (TppUpdateSubQueueTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     TppItePush @ 0x18006BC3C (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A7BE0 (NtWaitForAlertByThreadId.c)
 *     TppETWTimerCancelled @ 0x1801249CC (TppETWTimerCancelled.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (unsigned __int64)&a2[16] + (-(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWTimerCancelled(v9, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v9 + 16, a1 + 248);
      TppPHDelete(v9 + 8, a1 + 288);
      LOBYTE(v11) = v6;
      TppUpdateSubQueueTimer(v9, v11);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v12);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      NtWaitForAlertByThreadId((PVOID)(a1 + 336), 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
}
