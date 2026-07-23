/*
 * XREFs of TppCancelTimer @ 0x180032C88
 * Callers:
 *     TpWaitForTimer @ 0x18002FB70 (TpWaitForTimer.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TpSetTimerEx @ 0x180032DB0 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x18004E4C0 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x18004E7F0 (TppWaitCompletion.c)
 *     TppTimerpStopCallbackGeneration @ 0x180088590 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppUpdateSubQueueTimer @ 0x180030DF8 (TppUpdateSubQueueTimer.c)
 *     TppPHDelete @ 0x180031784 (TppPHDelete.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppItePush @ 0x180068180 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A29E0 (NtWaitForAlertByThreadId.c)
 *     TppETWTimerCancelled @ 0x18012640C (TppETWTimerCancelled.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // bl
  char v6; // bp
  __int64 v9; // r13
  __int64 v10; // rcx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (__int64)&a2[16] + (-(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWTimerCancelled(v9, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete((_QWORD *)(v9 + 16), (_QWORD *)(a1 + 248));
      TppPHDelete((_QWORD *)(v9 + 8), (_QWORD *)(a1 + 288));
      TppUpdateSubQueueTimer(v9, v6);
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
      TppItePush(a1 + 336, v11);
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
