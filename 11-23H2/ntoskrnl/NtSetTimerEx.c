/*
 * XREFs of NtSetTimerEx @ 0x14032E830
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x14032E9B8 (ExpSetTimer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  __int128 *v4; // rbx
  char PreviousMode; // si
  char *v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  int v10; // eax
  NTSTATUS v11; // ebx
  NTSTATUS result; // eax
  bool v13; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int128 v17; // [rsp+80h] [rbp-18h]

  v4 = (__int128 *)TimerSetInformation;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v13 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && TimerSetInformationLength )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)TimerSetInformation + TimerSetInformationLength;
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < TimerSetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( PreviousMode )
  {
    v15 = *(_OWORD *)TimerSetInformation;
    v16 = *((_OWORD *)TimerSetInformation + 1);
    v17 = *((_OWORD *)TimerSetInformation + 2);
    v4 = &v15;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return -1073741583;
  v8 = *((_QWORD *)v4 + 3);
  if ( !v8 || (result = PoCaptureReasonContext(v8, PreviousMode, 0LL, 0, &v13, (__int64 *)&P), result >= 0) )
  {
    v9 = P;
    LOBYTE(TimerSetInformationClass) = PreviousMode;
    v10 = ExpSetTimer(
            TimerHandle,
            *(_QWORD *)&TimerSetInformationClass,
            v4,
            *((_QWORD *)v4 + 1),
            *((_QWORD *)v4 + 2),
            P,
            v13,
            *((_DWORD *)v4 + 8),
            *((_DWORD *)v4 + 9),
            *((_QWORD *)v4 + 5));
    v11 = v10;
    if ( v10 < 0 || v10 == 1073741861 )
    {
      if ( v9 )
        PoDestroyReasonContext(v9);
    }
    return v11;
  }
  return result;
}
