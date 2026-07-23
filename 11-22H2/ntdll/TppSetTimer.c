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

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  char v8; // bp
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  LONG v16; // eax

  v5 = (__int64 *)(a1 + 328);
  v6 = (unsigned __int64)*a3 >> 63;
  *(_DWORD *)(a1 + 348) = a4;
  v8 = v6 ^ 1;
  *(_DWORD *)(a1 + 344) = a5;
  v11 = (unsigned __int64)&a2[16] + (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFF88uLL);
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v15 = *a3;
    if ( !*a3 )
      v15 = 1LL;
    *v5 = v15;
  }
  else
  {
    if ( a1 == -328 )
    {
      v16 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v16);
    }
    else
    {
      *v5 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    v12 = *v5 - *a3;
    if ( v12 < *v5 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *v5 = v12;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerSet(v11, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v11, a1);
  LOBYTE(v14) = v8;
  TppUpdateSubQueueTimer(v11, v14);
  RtlReleaseSRWLockExclusive(a2);
}
