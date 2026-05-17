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

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  char v10; // al
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rbx

  v4 = a3;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWTimerExpiration((char *)a2 + (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFF88uLL) + 128, a1);
  v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive(a1 + 240, MEMORY[0x7FFE03B0], 0x7FFE03B0uLL, 0x7FFE0008uLL);
  v10 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v10 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_QWORD *)(a1 + 328) = 0LL;
      if ( !(unsigned __int8)TppWaitTimerExpiration(a1) )
        goto LABEL_14;
    }
    else
    {
      v11 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v11 )
      {
        v12 = v8;
        if ( !v4 )
          v12 = *(_QWORD *)(a1 + 328);
        v13 = 10000 * v11;
        v14 = v12 + 10000 * v11;
        *(_QWORD *)(a1 + 328) = v14;
        if ( v14 <= v8 )
        {
          v12 = (v8 - v14) % v13;
          *(_QWORD *)(a1 + 328) = v8 + v13 - v12;
        }
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive((unsigned __int64)a2, v12, v14, v9);
        TppEnqueueTimer((__int64)(a2 + 16), a1);
        TppUpdateSubQueueTimer((__int64)(a2 + 16), 0LL, v15, v16);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_14:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    goto LABEL_15;
  }
  v18 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  TppIteWakeWaiters(v18);
LABEL_15:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
