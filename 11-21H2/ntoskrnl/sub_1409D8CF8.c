/*
 * XREFs of sub_1409D8CF8 @ 0x1409D8CF8
 * Callers:
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14062B1A8 @ 0x14062B1A8 (sub_14062B1A8.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409D8CF8(_QWORD *Src, unsigned __int64 a2, int a3)
{
  unsigned int v4; // ebx
  struct _LIST_ENTRY *v6; // rbp
  volatile LONG *Flink; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v9; // rdi
  struct _LIST_ENTRY *v10; // rcx

  v4 = 0;
  v6 = (struct _LIST_ENTRY *)*((_QWORD *)KeGetCurrentThread() + 23);
  Flink = (volatile LONG *)v6[143].Flink;
  if ( Flink )
  {
    if ( a3 )
    {
      return (unsigned int)sub_14062B1A8(Flink, Src, a2);
    }
    else
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (a2 + 4), 0x63506D56u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag->List.Blink = 0LL;
        PoolWithTag[1].List.Flink = 0LL;
        PoolWithTag[1].List.Blink = 0LL;
        PoolWithTag[1].WorkerRoutine = 0LL;
        PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409DA4D0;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ObfReferenceObject(v6);
        v9[1].WorkerRoutine = (PWORKER_THREAD_ROUTINE)a2;
        v10 = (struct _LIST_ENTRY *)(((unsigned __int64)&v9[1].Parameter + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v9[1].List.Blink = v10;
        v9[1].List.Flink = v6;
        memmove(v10, Src, 16 * a2);
        ExQueueWorkItem(v9, DelayedWorkQueue);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741667;
  }
  return v4;
}
