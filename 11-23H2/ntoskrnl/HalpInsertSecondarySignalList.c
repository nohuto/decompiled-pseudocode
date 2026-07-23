/*
 * XREFs of HalpInsertSecondarySignalList @ 0x14051A538
 * Callers:
 *     HalpReleaseSecondaryIcEntryShared @ 0x14037D070 (HalpReleaseSecondaryIcEntryShared.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     HalpAcquireHighLevelLock @ 0x14037CD18 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInsertSecondarySignalList(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = HalpAcquireHighLevelLock(&SecondarySignalListLock);
  v3 = (_QWORD *)qword_140C610C8;
  v4 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_140C610C8 != &SecondarySignalList )
    __fastfail(3u);
  v5 = SecondarySignalDpcRunning == 0;
  *v4 = &SecondarySignalList;
  v4[1] = v3;
  *v3 = v4;
  qword_140C610C8 = (__int64)v4;
  if ( v5 )
  {
    SecondarySignalDpcRunning = 1;
    KiInsertQueueDpc((ULONG_PTR)&SecondarySignalDpc, 0LL, 0LL, 0LL, 0);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&SecondarySignalListLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
