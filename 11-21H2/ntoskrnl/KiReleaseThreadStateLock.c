/*
 * XREFs of KiReleaseThreadStateLock @ 0x14035D0F8
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x140201DF4 (KeTryToFreezeThreadStack.c)
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiSetIdealProcessorThread @ 0x14035D00C (KiSetIdealProcessorThread.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     KiSetThreadSchedulingGroup @ 0x14035EE9C (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035EF6C (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateThreadCpuSets @ 0x1403D3170 (KiUpdateThreadCpuSets.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140574B54 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x1405757C0 (KeAbCrossThreadDelete.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadStateLock(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[6] - 1);
        SchedulerAssist[6] = result;
        if ( !(_DWORD)result )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  if ( a3 )
  {
    _InterlockedAnd64(a3, 0LL);
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        result = (unsigned int)(v7[6] - 1);
        v7[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return result;
}
