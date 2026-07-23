/*
 * XREFs of sub_1405FD08C @ 0x1405FD08C
 * Callers:
 *     sub_1405F8850 @ 0x1405F8850 (sub_1405F8850.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405FD08C(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v8; // edi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  int v10; // edx

  v8 = 0;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6D546D73u);
  if ( PoolWithTag )
  {
    if ( sub_14035F464(a1, *(_DWORD *)(a2 + 6016)) )
    {
      PoolWithTag->List.Blink = 0LL;
      PoolWithTag[1].WorkerRoutine = 0LL;
      PoolWithTag[1].Parameter = 0LL;
      PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1405FBC00;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)(a2 + 6216);
      PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)a1;
      LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a2 + 6016);
      v10 = *(_DWORD *)(a1 + 1840) & 1;
      LODWORD(PoolWithTag[1].Parameter) = a3;
      HIDWORD(PoolWithTag[1].WorkerRoutine) = v10;
      HIDWORD(PoolWithTag[1].Parameter) = a4;
      ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
    }
    else
    {
      v8 = -1073741431;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
