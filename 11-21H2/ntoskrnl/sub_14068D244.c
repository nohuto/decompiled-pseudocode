/*
 * XREFs of sub_14068D244 @ 0x14068D244
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_14068D244(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_140C02770 )
      return 1;
    if ( a2 + 4096 <= dword_140C54CC8 )
    {
      LODWORD(v3) = 393216;
      if ( *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16720LL) >> 1 < 0x60000uLL )
        v3 = *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16720LL) >> 1;
      if ( a2 + 4096 > 36864 * (int)v3 / 0xAu && !byte_140D3CA8A && byte_140C5B134 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140911AE0;
          byte_140D3CA8A = 1;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
