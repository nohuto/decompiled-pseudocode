/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140599558
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1405871D0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_140C3A004 + dword_140C3A008) & 0x3F);
  if ( a1 )
  {
    qword_140C3A010 |= v5;
    v3 = 1;
    ++dword_140C3A008;
  }
  else
  {
    qword_140C3A010 &= ~v5;
    ++dword_140C3A004;
  }
  if ( v3 != (xmmword_140C3A1B8 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140C3A1B8);
      LODWORD(xmmword_140C3A1B8) = xmmword_140C3A1B8 | 1;
    }
    else
    {
      LODWORD(xmmword_140C3A1B8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140C3A190, CriticalWorkQueue);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
}
