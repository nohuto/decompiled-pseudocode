/*
 * XREFs of TppSetTimer @ 0x180030BC8
 * Callers:
 *     TppSetupNextWait @ 0x18002FEE0 (TppSetupNextWait.c)
 *     TpSetTimerEx @ 0x180032DB0 (TpSetTimerEx.c)
 * Callees:
 *     TppEnqueueTimer @ 0x180030D00 (TppEnqueueTimer.c)
 *     TppUpdateSubQueueTimer @ 0x180030DF8 (TppUpdateSubQueueTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180077290 (RtlNtStatusToDosErrorNoTeb.c)
 *     TppETWTimerSet @ 0x1801265A8 (TppETWTimerSet.c)
 */

__int64 __fastcall TppSetTimer(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 *v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // rdx
  char v9; // bp
  _QWORD *v10; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v18; // eax

  v5 = (__int64 *)(a1 + 328);
  v6 = *a3 >> 63;
  v8 = 1LL;
  *(_DWORD *)(a1 + 348) = a4;
  v9 = v6 ^ 1;
  v10 = a3;
  *(_DWORD *)(a1 + 344) = a5;
  v12 = (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v9 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v13 = *a3;
    if ( !*a3 )
      v13 = 1LL;
    *v5 = v13;
  }
  else
  {
    if ( a1 == -328 )
    {
      v18 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v18);
    }
    else
    {
      a4 = 2147353520LL;
      v8 = RtlpFreezeTimeBias;
      a3 = (_QWORD *)MEMORY[0x7FFE03B0];
      *v5 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    v14 = *v5 - *v10;
    if ( v14 < *v5 )
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    *v5 = v14;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v8, a3, a4) )
    v15 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v15 = 2147353478LL;
  if ( *(_BYTE *)v15 )
    TppETWTimerSet(v12, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v12, a1);
  LOBYTE(v16) = v9;
  TppUpdateSubQueueTimer(v12, v16);
  return RtlReleaseSRWLockExclusive(a2);
}
