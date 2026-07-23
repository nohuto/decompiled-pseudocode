/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x14057A200
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiIntSteerAssignCpuSet @ 0x14057A370 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x14057A570 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  __int64 *v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v6 = a1 != -1 ? 0xC0000225 : 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v8 = KiIntTrackRootList;
  v9 = &KiIntTrackRootList;
  v10 = v7;
  while ( (__int64 *)v8 != v9 )
  {
    if ( a1 == -1 )
    {
      KiIntSteerClearCpuSetAssignment(v8);
    }
    else if ( *(_DWORD *)(v8 + 32) == a1 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
      break;
    }
    v8 = *(_QWORD *)v8;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiIntTrackSpinlock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  return v6;
}
