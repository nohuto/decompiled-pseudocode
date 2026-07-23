/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1405999B8
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x140587630 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_140C39FA4 + dword_140C39FA8) & 0x3F);
  if ( a1 )
  {
    qword_140C39FB0 |= v5;
    v3 = 1;
    ++dword_140C39FA8;
  }
  else
  {
    qword_140C39FB0 &= ~v5;
    ++dword_140C39FA4;
  }
  if ( v3 != (xmmword_140C3A158 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140C3A158);
      LODWORD(xmmword_140C3A158) = xmmword_140C3A158 | 1;
    }
    else
    {
      LODWORD(xmmword_140C3A158) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140C3A130, CriticalWorkQueue);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
