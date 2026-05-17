/*
 * XREFs of TppCancelTimer @ 0x180032B28
 * Callers:
 *     TpWaitForTimer @ 0x18002F9A0 (TpWaitForTimer.c)
 *     TppCancelWait @ 0x180030648 (TppCancelWait.c)
 *     TpSetTimerEx @ 0x180032C50 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x18004E360 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x18004E690 (TppWaitCompletion.c)
 *     TppTimerpStopCallbackGeneration @ 0x180088D90 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppUpdateSubQueueTimer @ 0x180030C28 (TppUpdateSubQueueTimer.c)
 *     TppPHDelete @ 0x180031624 (TppPHDelete.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     TppItePush @ 0x180068160 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
 *     TppETWTimerCancelled @ 0x1801278BC (TppETWTimerCancelled.c)
 */

char __fastcall TppCancelTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // r15
  bool v7; // bp
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1;
  v5 = a3;
  v7 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v10 = -(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL;
    v11 = v10 + a2 + 128;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, a2, a3, a4) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      TppETWTimerCancelled(v11, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete((_QWORD *)(v11 + 16), (_QWORD *)(a1 + 248));
      TppPHDelete((_QWORD *)(v11 + 8), (_QWORD *)(a1 + 288));
      LOBYTE(v13) = v7;
      TppUpdateSubQueueTimer(v11, v13, v14, v15);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !v5 )
        RtlReleaseSRWLockExclusive(a1 + 240);
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v16);
      RtlReleaseSRWLockExclusive(a1 + 240);
      NtWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( v5 )
        RtlAcquireSRWLockExclusive(a1 + 240);
      return 0;
    }
    return v4;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !(_BYTE)a3 )
      RtlReleaseSRWLockExclusive(a1 + 240);
    return 0;
  }
}
