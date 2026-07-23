/*
 * XREFs of TppSetTimer @ 0x18001E794
 * Callers:
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 *     TppSetupNextWait @ 0x18001F61C (TppSetupNextWait.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18001E8C8 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18001EA28 (TppEnqueueTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18007AF90 (RtlNtStatusToDosErrorNoTeb.c)
 *     TppETWTimerSet @ 0x180124B68 (TppETWTimerSet.c)
 */

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  bool v7; // bp
  __int64 *v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  LONG v15; // eax

  v7 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  v9 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v10 = (unsigned __int64)&a2[16] + (-(__int64)v7 & 0xFFFFFFFFFFFFFF88uLL);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v12 = *a3;
    if ( !*a3 )
      v12 = 1LL;
  }
  else
  {
    if ( a1 == -328 )
    {
      v15 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v15);
      v11 = MEMORY[0];
    }
    else
    {
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v9 = v11;
    }
    v12 = v11 - *a3;
    if ( v12 < v11 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v9 = v12;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerSet(v10, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v10, a1);
  LOBYTE(v14) = v7;
  TppUpdateSubQueueTimer(v10, v14);
  RtlReleaseSRWLockExclusive(a2);
}
