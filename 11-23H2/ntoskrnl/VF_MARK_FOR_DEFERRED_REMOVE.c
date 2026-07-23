/*
 * XREFs of VF_MARK_FOR_DEFERRED_REMOVE @ 0x140AC4AF8
 * Callers:
 *     VfIoDeleteDevice @ 0x140AD2234 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VF_MARK_FOR_DEFERRED_REMOVE(struct _LIST_ENTRY *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C36950);
  Flink = ViAdapterList.Flink;
  v4 = v2;
  while ( &ViAdapterList != Flink )
  {
    if ( Flink[4].Flink == a1 )
      LOBYTE(Flink[4].Blink) = 1;
    Flink = Flink->Flink;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36950);
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
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
