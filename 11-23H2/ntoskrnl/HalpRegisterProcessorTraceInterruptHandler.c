/*
 * XREFs of HalpRegisterProcessorTraceInterruptHandler @ 0x1405219D4
 * Callers:
 *     HalpSetSystemInformation @ 0x14085EEF0 (HalpSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpRegisterProcessorTraceInterruptHandler(__int64 (__fastcall *a1)(_QWORD))
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140D18358 )
  {
    if ( qword_140D18358 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpProcessorTraceInterruptHandler = a1;
      if ( !a1 )
        qword_140D18358 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpProcessorTraceInterruptHandler = a1;
    if ( a1 )
      qword_140D18358 = KeGetCurrentThread()[1].CycleTime;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpPerfInterruptHandlerRegistrationLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return v2;
}
