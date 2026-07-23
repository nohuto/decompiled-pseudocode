/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x1402B9E38
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402BAF88 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 updated; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rdi
  signed __int32 *SchedulerAssist; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  result = *(unsigned int *)(a2 + 120);
  if ( (result & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = updated;
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v9 = *(_QWORD *)(a1 + 11528);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a2 + 32);
      if ( v10 > v7 )
        *(_QWORD *)(v9 - 184) += v10 - v7;
    }
    result = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = v7;
  }
  return result;
}
