/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140599DD8
 * Callers:
 *     PpmUpdateIdleVeto @ 0x140586920 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14058B84C (PopFxPlatformStateAvailable.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099827C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140599D70 (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140CF7D88);
  if ( a1 )
  {
    if ( ++dword_140CF7D84 == 1 )
    {
      v2 = 0LL;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v2, &qword_140CF7C78, &qword_140CF7C80);
    }
  }
  else if ( !--dword_140CF7D84 )
  {
    LOBYTE(v2) = 1;
    goto LABEL_6;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140CF7D88);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
