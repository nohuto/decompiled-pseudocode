/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x1406A6FC4
 * Callers:
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E628C (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x14020CA40 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x14020E6A0 (PsUpdateComponentPower.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x14031B40C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PspSetProcessSchedulingGroup @ 0x14068373C (PspSetProcessSchedulingGroup.c)
 *     PspApplyJobLimitsToProcess @ 0x1406A6EC4 (PspApplyJobLimitsToProcess.c)
 *     PspRequestProcessExecutionState @ 0x1406A70B8 (PspRequestProcessExecutionState.c)
 *     PspComputeExecutionState @ 0x1406A70DC (PspComputeExecutionState.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r8
  __int64 v9; // rdx

  PspApplyJobLimitsToProcess(a3, 0);
  if ( *(_QWORD *)(a1 + 1232) )
  {
    if ( a2 && *(_QWORD *)(a2 + 1232) || PsCpuFairShareEnabled )
      PspSetProcessSchedulingGroup(a3, 0LL);
    PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1232));
  }
  LOBYTE(v6) = PspComputeExecutionState(a1);
  PspRequestProcessExecutionState(a3, v6, 0LL);
  if ( a2 )
    v9 = *(unsigned int *)(a2 + 1068);
  else
    v9 = 5LL;
  if ( (_DWORD)v9 != *(_DWORD *)(a1 + 1068) )
    PspNotifyProcessEffectiveIoLimitChanged(v7, v9, v8);
  if ( (*(_DWORD *)(a1 + 1536) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 632), 4u);
  PsUpdateComponentPower((struct _KPROCESS *)a3, 8, *(_QWORD *)(a1 + 1792));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 1120), 4, 32);
}
