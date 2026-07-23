/*
 * XREFs of sub_14035F344 @ 0x14035F344
 * Callers:
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_1406ED260 @ 0x1406ED260 (sub_1406ED260.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_140240FB0 @ 0x140240FB0 (sub_140240FB0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 */

__int64 __fastcall sub_14035F344(__int64 a1, __int64 a2)
{
  int v2; // r11d
  unsigned int v3; // ebx
  __int64 v6; // rax
  int v7; // r9d
  __int64 v9; // r10
  int v10; // r11d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  int v16; // [rsp+A8h] [rbp+28h] BYREF
  int v17; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *(_DWORD *)(a2 + 6016);
  v3 = 0;
  WorkItem.List.Blink = 0LL;
  BYTE3(Object) = 0;
  v15 = 0;
  v6 = sub_14035F5E8(a1, v2 & 0x3FF);
  if ( v7 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v6 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v6 + 34) & 1) == 0 )
  {
    return v3;
  }
  v16 = 0;
  v17 = 0;
  sub_140240FB0(a2 + 80, &v16, &v17);
  if ( (unsigned int)(v17 + 1023) < 0x400 )
  {
    _m_prefetchw((const void *)(v9 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v9 + 34), 2u) & 2) == 0 )
    {
      WorkItem.List.Blink = 0LL;
      v13[1] = v13;
      Object = 393216LL;
      v13[0] = v13;
      v15 = 0;
      WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140260BE0;
      WorkItem.Parameter = &WorkItem;
      v13[2] = a1;
      v14 = v10;
      WorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v3;
}
