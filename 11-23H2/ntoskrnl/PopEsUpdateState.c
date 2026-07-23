/*
 * XREFs of PopEsUpdateState @ 0x1403C6434
 * Callers:
 *     PopEsWorker @ 0x1408738D0 (PopEsWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceEsState @ 0x140593394 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x1407A6F38 (PopCurrentPowerState.c)
 *     PopEsPublishState @ 0x140864480 (PopEsPublishState.c)
 *     PopEsSnapTelemetry @ 0x140998698 (PopEsSnapTelemetry.c)
 */

__int64 __fastcall PopEsUpdateState(char a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // r14d
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF

  memset(v14, 0, 32);
  PopCurrentPowerState(v14);
  result = (unsigned int)PopEsMode;
  v4 = 0;
  v5 = PopEsState;
  v6 = 0;
  v7 = PopEsReason;
  if ( PopEsMode == 1 )
  {
    v6 = 1;
LABEL_19:
    v4 = 1;
    goto LABEL_6;
  }
  if ( PopEsMode == 2 )
  {
    if ( dword_140C3D9B0 )
    {
      if ( BYTE1(v14[0]) )
      {
        if ( v14[2] )
        {
          v2 = (unsigned int)(v14[2] + 100 * v14[3] - 1) % v14[2];
          result = (unsigned int)(v14[2] + 100 * v14[3] - 1) / v14[2];
          if ( (unsigned int)result <= dword_140C3D9B0 )
          {
            v6 = 2;
            goto LABEL_19;
          }
        }
      }
    }
  }
  if ( byte_140C3D9B4 && dword_140C3D9B0 && PopEsBgActivityPolicy == 1 )
  {
    v6 = 8;
    goto LABEL_19;
  }
  if ( PopEsEnabledOnHost )
  {
    v6 = 16;
    goto LABEL_19;
  }
LABEL_6:
  if ( a1 || v4 != PopEsState || v6 != PopEsReason )
  {
    PopEsSnapTelemetry(v14, v2);
    v8 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
    PopEsState = v4;
    PopEsReason = v6;
    if ( PopCsResiliencyStats[0] && (v4 != v5 || v6 != v7) )
      ++dword_140C3CA48;
    KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v8 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( v4 != v5 )
      PopEsPublishState();
    return PopDiagTraceEsState();
  }
  return result;
}
