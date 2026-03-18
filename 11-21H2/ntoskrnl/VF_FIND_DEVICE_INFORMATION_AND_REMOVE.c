/*
 * XREFs of VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140A83EE0
 * Callers:
 *     VfIoDeleteDevice @ 0x140A91824 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

struct _LIST_ENTRY *__fastcall VF_FIND_DEVICE_INFORMATION_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  unsigned __int64 v3; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
  Flink = ViAdapterList.Flink;
  if ( &ViAdapterList != ViAdapterList.Flink )
  {
    while ( 1 )
    {
      v5 = Flink->Flink;
      if ( Flink[1].Blink == a1 )
        break;
      Flink = Flink->Flink;
      if ( &ViAdapterList == v5 )
        goto LABEL_4;
    }
    v2 = Flink;
    Blink = Flink->Blink;
    if ( v5->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v5;
    v5->Blink = Blink;
  }
LABEL_4:
  KxReleaseSpinLock(&qword_140D575A0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
