/*
 * XREFs of ViFaultsInitializeAppsList @ 0x140AD67C8
 * Callers:
 *     VfFaultsInitPhase0 @ 0x140AD5E38 (VfFaultsInitPhase0.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ViFaultsAddAllApps @ 0x140AD6374 (ViFaultsAddAllApps.c)
 */

__int64 ViFaultsInitializeAppsList()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  qword_140C36D88 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v1 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v6 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v1);
  if ( VerifierFaultApplicationsBufferSize != -1 && (unsigned int)(VerifierFaultApplicationsBufferSize - 2) <= 0xFE )
    return (unsigned int)ViFaultsAddAllApps(
                           VerifierFaultApplicationsBuffer,
                           ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  return v0;
}
