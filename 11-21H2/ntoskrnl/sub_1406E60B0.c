/*
 * XREFs of sub_1406E60B0 @ 0x1406E60B0
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1402D26E0 @ 0x1402D26E0 (sub_1402D26E0.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14074D338 @ 0x14074D338 (sub_14074D338.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E60B0(__int64 MaxDataSize, int a2)
{
  unsigned int v3; // ebp
  bool v4; // di
  __int64 i; // rdx
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx

  v3 = 259;
  if ( (_DWORD)InitSafeBootMode )
    return (unsigned int)sub_14076E9B8(MaxDataSize);
  v4 = a2 == 0;
  if ( (dword_140C0974C & 4) == 0 || a2 )
    return (unsigned int)sub_14076E9B8(MaxDataSize);
  for ( i = *(_QWORD *)(MaxDataSize + 32); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 8) + 16LL) & 0x1000) == 0 )
      return (unsigned int)sub_14076E9B8(MaxDataSize);
  }
  Pool2 = ExAllocatePool2(64LL, 32LL, 829451856LL);
  v8 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( !Pool2 )
    return (unsigned int)sub_14076E9B8(MaxDataSize);
  v9 = (_QWORD *)sub_14074D338(MaxDataSize, 772LL, Pool2);
  if ( v9 )
  {
    v8->List.Flink = 0LL;
    v8->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409478F0;
    v8->Parameter = v9;
    sub_1402DE844(MaxDataSize, 770);
    *(_DWORD *)(MaxDataSize + 392) = 259;
    sub_1402D26E0(v10, v9);
    ExQueueWorkItem(v8, DelayedWorkQueue);
  }
  else
  {
    v4 = 0;
    ExFreePoolWithTag(v8, 0);
  }
  if ( !v4 )
    return (unsigned int)sub_14076E9B8(MaxDataSize);
  return v3;
}
