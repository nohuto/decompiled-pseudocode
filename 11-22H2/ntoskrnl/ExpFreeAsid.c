/*
 * XREFs of ExpFreeAsid @ 0x14060D8A0
 * Callers:
 *     ExFreeSvmAsid @ 0x14036651C (ExFreeSvmAsid.c)
 *     IommupPasidDeviceDelete @ 0x14050E464 (IommupPasidDeviceDelete.c)
 *     ExFreeAsid @ 0x14060D0E8 (ExFreeAsid.c)
 *     ExpAssignPasid @ 0x140A01800 (ExpAssignPasid.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpFreeAsid(unsigned int a1, void *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-28h] BYREF

  memset(&v13, 0, sizeof(v13));
  KeAcquireInStackQueuedSpinLock(&qword_140C2D3D8, &v13);
  v4 = (char *)qword_140C2D3D0 + 16 * a1;
  v5 = v4[1] - 1LL;
  v4[1] = v5;
  if ( v5 )
  {
    v4[1] = v5 | 0x8000000000000000uLL;
    v6 = 0;
  }
  else
  {
    *v4 = 0LL;
    v6 = 1;
    --dword_140C2D3C8;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13);
  OldIrql = v13.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v13.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (v13.OldIrql + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v6 == 1 )
  {
    if ( a2 )
      ObfDereferenceObject(a2);
  }
}
