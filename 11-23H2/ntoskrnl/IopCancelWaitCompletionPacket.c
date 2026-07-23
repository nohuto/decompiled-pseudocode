/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x140349B40
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x140349870 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x140349980 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     ObGetAssociatedWaitObject @ 0x1402509DC (ObGetAssociatedWaitObject.c)
 *     KiDeregisterObjectWaitBlock @ 0x14033C6C0 (KiDeregisterObjectWaitBlock.c)
 *     KeRemoveQueueEntry @ 0x140349C08 (KeRemoveQueueEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall IopCancelWaitCompletionPacket(PVOID Object, char a2, unsigned __int8 a3)
{
  void *v3; // r14
  unsigned __int64 v5; // rdi
  __int16 *AssociatedWaitObject; // rax
  char v8; // al
  void *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v3 = (void *)*((_QWORD *)Object + 10);
  v5 = a3;
  AssociatedWaitObject = ObGetAssociatedWaitObject((__int64)v3);
  v8 = KiDeregisterObjectWaitBlock((volatile signed __int32 *)AssociatedWaitObject, (__int64 *)Object);
  v9 = (void *)*((_QWORD *)Object + 11);
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(*((_QWORD *)Object + 11), Object)) )
    return 0;
  *((_QWORD *)Object + 11) = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock((volatile signed __int64 *)Object + 12);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
