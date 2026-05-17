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

char __fastcall TppCancelTimer(__int64 a1, volatile signed __int64 *a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (unsigned __int64)a2 + (-(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL) + 128;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 )
      TppETWTimerCancelled(v9, a1);
    RtlAcquireSRWLockExclusive((unsigned __int64)a2, v10, v11, v12);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v9 + 16, a1 + 248);
      TppPHDelete(v9 + 8, a1 + 288);
      LOBYTE(v14) = v6;
      TppUpdateSubQueueTimer(v9, v14);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v18);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      NtWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive(a1 + 240, v15, v16, v17);
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    return 0;
  }
}
