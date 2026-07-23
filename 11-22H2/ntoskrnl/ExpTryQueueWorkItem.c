/*
 * XREFs of ExpTryQueueWorkItem @ 0x1402B990C
 * Callers:
 *     ExTryQueueWorkItem @ 0x1402B9B00 (ExTryQueueWorkItem.c)
 *     IoTryQueueWorkItem @ 0x14036B7A0 (IoTryQueueWorkItem.c)
 * Callees:
 *     ExpIsPoolReadyForWork @ 0x1402B7B80 (ExpIsPoolReadyForWork.c)
 *     ExpValidateWorkItem @ 0x1402B7E50 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x1402B7EF0 (KeInsertPriQueue.c)
 *     ExpTypeToPriority @ 0x1402B951C (ExpTypeToPriority.c)
 *     MmGetNextNode @ 0x14034E6C0 (MmGetNextNode.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140361390 (ExpPartitionCreateThreadIfNecessary.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  char inserted; // r15
  __int64 CurrentIrql; // rbx
  unsigned int v9; // esi
  unsigned __int16 NextNode; // ax
  unsigned __int16 *v11; // r14
  int v12; // r10d
  __int64 v13; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+34h] [rbp-34h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h]

  v23 = 0;
  inserted = 0;
  ExpValidateWorkItem(a2, a3);
  v22 = ExpTypeToPriority(a3);
  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v16) = 4;
    if ( (_BYTE)CurrentIrql != 2 )
      v16 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  v9 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  NextNode = v9;
  if ( (unsigned __int16)v9 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)KeNodeBlock[NextNode];
      if ( v11 == (unsigned __int16 *)((char *)&KiNodeInit + 304 * NextNode) )
        v11 = 0LL;
      if ( ExpIsPoolReadyForWork(a1, v11, a4) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v11) + 8LL * a4);
        if ( (v13 & 1) != 0 )
          v13 = 0LL;
        inserted = KeInsertPriQueue(v13, a2, v22, 0, v12);
        if ( inserted )
        {
LABEL_9:
          LOBYTE(CurrentIrql) = v24;
          break;
        }
        *(_DWORD *)(v13 + 716) |= 0x80000000;
        ExpPartitionCreateThreadIfNecessary(a1, v11, v13);
      }
      NextNode = MmGetNextNode(v9, &v23);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_9;
    }
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
