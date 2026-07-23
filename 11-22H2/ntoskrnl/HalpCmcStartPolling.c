/*
 * XREFs of HalpCmcStartPolling @ 0x1403B42D8
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x140505820 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140A8B58C (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     HalpIsPartitionCpuManager @ 0x140378548 (HalpIsPartitionCpuManager.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpCmcStartPolling(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) || (LOBYTE(v5) = HalpIsPartitionCpuManager(v3, v2), (_BYTE)v5) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
    if ( HalpCmcPollingInitialized )
    {
      if ( (HalpMcaPollForCmc || HalpCmciRevertToPolledMode || HalpCmcPollingStartDeferred) && !HalpCmcPollingStarted )
      {
        KiSetTimerEx(
          (__int64)&qword_140C6A908,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140C6A948);
        HalpCmcPollingStarted = 1;
      }
    }
    else
    {
      HalpCmcPollingStartDeferred = 1;
    }
    LOBYTE(v5) = KxReleaseSpinLock((volatile signed __int64 *)&HalpCmcFallbackLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      LOBYTE(v5) = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v5 <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && (unsigned __int8)v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v8 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v8 )
          LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
  return v5;
}
