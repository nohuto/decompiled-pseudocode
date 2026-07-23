/*
 * XREFs of NtSetTimer @ 0x1403B2B00
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x14032E9B8 (ExpSetTimer.c)
 */

NTSTATUS __cdecl NtSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  PLARGE_INTEGER v9; // rbx
  bool v10; // si
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rax
  BOOLEAN v13; // cl
  _QWORD *v14; // r14
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  NTSTATUS result; // eax
  char v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-38h] BYREF

  v9 = DueTime;
  v19 = 0LL;
  v18 = 0;
  P[0] = 0LL;
  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DueTime < 0x7FFFFFFF0000LL )
      v12 = (__int64)DueTime;
    v19 = *(_QWORD *)v12;
    v9 = (PLARGE_INTEGER)&v19;
    P[1] = &v19;
    v13 = ResumeTimer;
  }
  else
  {
    v13 = ResumeTimer;
    if ( ResumeTimer )
      v10 = PoPowerDownActionInProgress != 0;
  }
  if ( Period < 0 )
    return -1073741580;
  if ( !v13
    || v10
    || (result = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, (bool *)&v18, (__int64 *)P), result >= 0) )
  {
    v14 = P[0];
    v15 = ExpSetTimer(
            TimerHandle,
            PreviousMode,
            (__int64)v9,
            (__int64)TimerApcRoutine,
            (__int64)TimerContext,
            (__int64)P[0],
            v18,
            Period,
            0,
            (__int64)PreviousState);
    v16 = v15;
    if ( (v15 < 0 || v15 == 1073741861) && v14 )
      PoDestroyReasonContext(v14);
    if ( v16 >= 0 && v10 )
      return 1073741861;
    return v16;
  }
  return result;
}
