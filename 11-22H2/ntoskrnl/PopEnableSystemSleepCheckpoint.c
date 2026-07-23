/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x140996E9C
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x140992B98 (PopTraceSleepCheckpointInitFailure.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140996FE0 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409FF610 (NtQueryEnvironmentVariableInfoEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AAA6B4 (PopCheckpointSystemSleepUnsafe.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  char v0; // si
  __int32 v1; // eax
  int v2; // edi
  __int32 v3; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbp
  LONGLONG v5; // rax
  unsigned __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v0 = 0;
  v10 = 0LL;
  v7 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  PopCheckpointSystemSleepEnabled = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  if ( PopCheckpointSystemSleepEnabledReg )
    goto LABEL_2;
  if ( (unsigned __int8)PopIsDetailedSleepReliabilityDiagEnabled() )
  {
    v0 = 1;
LABEL_2:
    v1 = 4;
    goto LABEL_8;
  }
  if ( !byte_140C3DAD4 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
    return (unsigned int)-1073741271;
  v1 = 1;
LABEL_8:
  _InterlockedExchange(&PopSleepCheckpointStatus, v1);
  if ( dword_140C31AF0 != 2 )
  {
    v2 = -1073741822;
    v3 = 8;
LABEL_15:
    _InterlockedExchange(&PopSleepCheckpointStatus, v3);
    PopTraceSleepCheckpointInitFailure();
    return (unsigned int)v2;
  }
  v2 = NtQueryEnvironmentVariableInfoEx(1LL, &v10, &v7, &v9);
  if ( v2 < 0 )
    goto LABEL_14;
  if ( v7 <= 0x400 )
  {
    v2 = -1073740716;
    v3 = 9;
    goto LABEL_15;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v2 = PopCheckpointSystemSleepUnsafe(0LL);
  if ( v2 < 0 )
  {
LABEL_14:
    v3 = 15;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - InterruptTimePrecise.QuadPart;
  if ( v0 && (unsigned __int64)v5 > 0x186A0 )
  {
    v2 = 258;
    _InterlockedExchange(&PopSleepCheckpointStatus, 10);
  }
  else
  {
    PopCheckpointSystemSleepEnabled = 1;
    return 0;
  }
  return (unsigned int)v2;
}
