/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x140683088
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140209344 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x140209380 (PsUpdateComponentPower.c)
 *     PspNotifyProcessBackgroundTransition @ 0x14035B760 (PspNotifyProcessBackgroundTransition.c)
 *     PspRequestProcessExecutionState @ 0x140683844 (PspRequestProcessExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x140683890 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x1406CAA7C (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx

  PspApplyJobLimitsToProcess(a3, 0LL);
  v6 = *(_QWORD *)(a1 + 1208);
  if ( v6 )
  {
    if ( a2 && *(_QWORD *)(a2 + 1208) || PsCpuFairShareEnabled )
    {
      PspSetProcessSchedulingGroup(a3, 0LL);
      v6 = *(_QWORD *)(a1 + 1208);
    }
    PspSetProcessSchedulingGroup(a3, v6);
  }
  v7 = (*(_DWORD *)(a1 + 1056) != 0 ? 2 : 0) | 1u;
  if ( !*(_DWORD *)(a1 + 1048) )
    v7 = *(_DWORD *)(a1 + 1056) != 0 ? 2 : 0;
  PspRequestProcessExecutionState(a3, v7, 0LL);
  if ( *(_DWORD *)(a1 + 1052) && (!a2 || !*(_DWORD *)(a2 + 1052)) )
    PspNotifyProcessBackgroundTransition(a3, 1);
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 632), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8, *(_QWORD *)(a1 + 1768));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 1120), 4, 32);
}
