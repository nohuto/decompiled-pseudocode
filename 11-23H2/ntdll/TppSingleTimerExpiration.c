/*
 * XREFs of TppSingleTimerExpiration @ 0x180030D8C
 * Callers:
 *     TppTimerQueueExpiration @ 0x1800313B0 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppEnqueueTimer @ 0x180030B30 (TppEnqueueTimer.c)
 *     TppUpdateSubQueueTimer @ 0x180030C28 (TppUpdateSubQueueTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     TppWorkPost @ 0x1800351B8 (TppWorkPost.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     TppIteWakeWaiters @ 0x180068190 (TppIteWakeWaiters.c)
 *     TppWaitTimerExpiration @ 0x1800864D8 (TppWaitTimerExpiration.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     TppETWTimerExpiration @ 0x18012793C (TppETWTimerExpiration.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rbx

  v4 = a3;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWTimerExpiration(a2 + (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFF88uLL) + 128, a1);
  v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive(a1 + 240);
  v9 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v9 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_14;
    }
    else
    {
      v10 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v10 )
      {
        if ( v4 )
          *(_QWORD *)(a1 + 328) = v8;
        v11 = 10000 * v10 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v11;
        if ( v11 <= v8 )
          *(_QWORD *)(a1 + 328) = v8 + 10000 * v10 - (v8 - v11) % (10000 * v10);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer(a2 + 128, a1);
        TppUpdateSubQueueTimer(a2 + 128, 0LL, v12, v13);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_14:
    RtlReleaseSRWLockExclusive(a1 + 240);
    goto LABEL_15;
  }
  v15 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  RtlReleaseSRWLockExclusive(a1 + 240);
  TppIteWakeWaiters(v15);
LABEL_15:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
