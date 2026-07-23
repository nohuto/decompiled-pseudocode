/*
 * XREFs of TppSingleTimerExpiration @ 0x180030F5C
 * Callers:
 *     TppTimerQueueExpiration @ 0x180031510 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppEnqueueTimer @ 0x180030D00 (TppEnqueueTimer.c)
 *     TppUpdateSubQueueTimer @ 0x180030DF8 (TppUpdateSubQueueTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppWorkPost @ 0x180035318 (TppWorkPost.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppIteWakeWaiters @ 0x1800681B0 (TppIteWakeWaiters.c)
 *     TppWaitTimerExpiration @ 0x180085CD8 (TppWaitTimerExpiration.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppETWTimerExpiration @ 0x18012648C (TppETWTimerExpiration.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rbx

  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWTimerExpiration((char *)&a2[16] + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFF88uLL), a1);
  v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v8 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v8 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_14;
    }
    else
    {
      v9 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v9 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v7;
        v10 = 10000 * v9 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v10;
        if ( v10 <= v7 )
          *(_QWORD *)(a1 + 328) = v7 + 10000 * v9 - (v7 - v10) % (10000 * v9);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer((__int64)&a2[16], a1);
        TppUpdateSubQueueTimer((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_14:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    goto LABEL_15;
  }
  v12 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppIteWakeWaiters(v12);
LABEL_15:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
