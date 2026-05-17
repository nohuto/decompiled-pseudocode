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

signed __int64 __fastcall TppSetTimer(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r14
  bool v8; // bp
  volatile signed __int64 *v9; // r15
  __int64 *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v19; // eax

  v6 = 1LL;
  v7 = a3;
  v8 = *a3 >= 0LL;
  v9 = (volatile signed __int64 *)a2;
  *(_DWORD *)(a1 + 348) = a4;
  v10 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v11 = (-(__int64)v8 & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v8 )
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
      v19 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v19);
      v6 = MEMORY[0];
    }
    else
    {
      a4 = 2147353520LL;
      a3 = (_QWORD *)MEMORY[0x7FFE03B0];
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v10 = v6;
    }
    a2 = 0x7FFFFFFFFFFFFFFFLL;
    v12 = v6 - *v7;
    if ( v12 < v6 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v10 = v12;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2, a3, a4) )
    v16 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    TppETWTimerSet(v11, a1);
  RtlAcquireSRWLockExclusive((unsigned __int64)v9, v13, v14, v15);
  TppEnqueueTimer(v11, a1);
  LOBYTE(v17) = v8;
  TppUpdateSubQueueTimer(v11, v17);
  return RtlReleaseSRWLockExclusive(v9);
}
