/*
 * XREFs of PoCaptureReasonContext @ 0x140209BF8
 * Callers:
 *     NtSetTimerEx @ 0x14032E830 (NtSetTimerEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036E00C (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetTimer @ 0x1403B2B00 (NtSetTimer.c)
 *     PoCreatePowerRequest @ 0x1403C6AC0 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058E190 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1407A8F10 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14084E210 (PoCreateThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B51C3C (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B71EFC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopCaptureReasonContext @ 0x1402096D8 (PopCaptureReasonContext.c)
 *     PoGetRequester @ 0x140209D2C (PoGetRequester.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, char a2, __int64 a3, char a4, bool *a5, __int64 *a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  int Requester; // edi
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *a6 = 0LL;
  if ( a1 && a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v11 = *(_OWORD *)a1;
      v12 = *(_OWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)&v11;
    }
    result = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    result = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = a2;
    Requester = PoGetRequester(v9, a3, *a6);
    if ( Requester < 0 )
    {
      if ( *a6 )
      {
        ExFreePoolWithTag((PVOID)*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    return (unsigned int)Requester;
  }
  return result;
}
