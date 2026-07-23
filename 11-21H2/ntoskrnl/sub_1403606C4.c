/*
 * XREFs of sub_1403606C4 @ 0x1403606C4
 * Callers:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_14023EB0C @ 0x14023EB0C (sub_14023EB0C.c)
 *     sub_14024DFC0 @ 0x14024DFC0 (sub_14024DFC0.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     sub_14057F740 @ 0x14057F740 (sub_14057F740.c)
 *     sub_14058A110 @ 0x14058A110 (sub_14058A110.c)
 *     sub_14058A2D8 @ 0x14058A2D8 (sub_14058A2D8.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_1405B3D90 @ 0x1405B3D90 (sub_1405B3D90.c)
 *     sub_1405B7340 @ 0x1405B7340 (sub_1405B7340.c)
 *     sub_1405E2D20 @ 0x1405E2D20 (sub_1405E2D20.c)
 *     sub_14063383C @ 0x14063383C (sub_14063383C.c)
 *     sub_140693EA8 @ 0x140693EA8 (sub_140693EA8.c)
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 *     sub_1406FD6C0 @ 0x1406FD6C0 (sub_1406FD6C0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407E6840 @ 0x1407E6840 (sub_1407E6840.c)
 *     NtAllocateVirtualMemory @ 0x1407E69E0 (NtAllocateVirtualMemory.c)
 *     sub_1407FC0D0 @ 0x1407FC0D0 (sub_1407FC0D0.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 *     sub_14085BC40 @ 0x14085BC40 (sub_14085BC40.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 *     sub_140936BF8 @ 0x140936BF8 (sub_140936BF8.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 *     sub_14096B768 @ 0x14096B768 (sub_14096B768.c)
 *     sub_14096DE64 @ 0x14096DE64 (sub_14096DE64.c)
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 *     sub_14096E3D8 @ 0x14096E3D8 (sub_14096E3D8.c)
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 *     sub_14096E7E4 @ 0x14096E7E4 (sub_14096E7E4.c)
 *     sub_14096E960 @ 0x14096E960 (sub_14096E960.c)
 *     sub_14096EAB0 @ 0x14096EAB0 (sub_14096EAB0.c)
 *     sub_14096F470 @ 0x14096F470 (sub_14096F470.c)
 *     sub_14097F59C @ 0x14097F59C (sub_14097F59C.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 *     sub_1409B3320 @ 0x1409B3320 (sub_1409B3320.c)
 *     sub_1409B3490 @ 0x1409B3490 (sub_1409B3490.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1403606C4(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 64);
    v5->Parameter = (PVOID)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409B3490;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
