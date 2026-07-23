/*
 * XREFs of TppSingleTimerExpiration @ 0x18001EEBC
 * Callers:
 *     TppTimerQueueExpiration @ 0x18001CE00 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppWorkPost @ 0x18001B54C (TppWorkPost.c)
 *     TppUpdateSubQueueTimer @ 0x18001E8C8 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18001EA28 (TppEnqueueTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     TppIteWakeWaiters @ 0x18006BC6C (TppIteWakeWaiters.c)
 *     TppWaitTimerExpiration @ 0x18008AF58 (TppWaitTimerExpiration.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppETWTimerExpiration @ 0x180124A4C (TppETWTimerExpiration.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rbx

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
        v10 = v7;
        if ( !a3 )
          v10 = *(_QWORD *)(a1 + 328);
        v11 = v10 + 10000 * v9;
        *(_QWORD *)(a1 + 328) = v11;
        if ( v11 <= v7 )
          *(_QWORD *)(a1 + 328) = v7 + 10000 * v9 - (v7 - v11) % (10000 * v9);
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
  v13 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppIteWakeWaiters(v13);
LABEL_15:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
