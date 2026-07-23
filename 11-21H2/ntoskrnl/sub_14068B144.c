/*
 * XREFs of sub_14068B144 @ 0x14068B144
 * Callers:
 *     sub_14053F520 @ 0x14053F520 (sub_14053F520.c)
 *     sub_14068B0E0 @ 0x14068B0E0 (sub_14068B0E0.c)
 *     sub_14068C154 @ 0x14068C154 (sub_14068C154.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 *     sub_140924648 @ 0x140924648 (sub_140924648.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14068B198 @ 0x14068B198 (sub_14068B198.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_14068B144(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  sub_14068B198(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= qword_140D3B200 - qword_140D3CC78 )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&qword_140D3CC78, v2);
  if ( qword_140D3CC78 > (unsigned __int64)qword_140D3B1F8 && !byte_140D3CA89 && byte_140C5B134 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140911AE0;
      byte_140D3CA89 = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 1;
}
