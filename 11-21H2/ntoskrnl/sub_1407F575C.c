/*
 * XREFs of sub_1407F575C @ 0x1407F575C
 * Callers:
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 * Callees:
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     sub_1402A188C @ 0x1402A188C (sub_1402A188C.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1405F7EBC @ 0x1405F7EBC (sub_1405F7EBC.c)
 *     sub_1406EBF2C @ 0x1406EBF2C (sub_1406EBF2C.c)
 */

int __fastcall sub_1407F575C(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // ebx
  _DWORD **v5; // rax
  __int64 v6; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF

  WorkItem.List.Blink = 0LL;
  memset(&Event, 0, sizeof(Event));
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  v2 = sub_1402A1124((ULONG_PTR)&qword_140D321C8, &v10, 0LL, 0);
  v3 = v2;
  if ( v2 )
    v4 = *(unsigned __int16 *)(v2 + 16);
  else
    v4 = dword_140D321F0;
  if ( v4 != -1 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1403773B0;
    WorkItem.Parameter = &Event;
    ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
    LODWORD(v2) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v3 )
    {
      sub_1406EBF2C(1);
      if ( a1 )
      {
        v5 = (_DWORD **)sub_14035F5E8((__int64)&unk_140D31A00, v4 & 0x3FF);
        sub_1405F7EBC(v6, *v5, 0LL);
      }
      LODWORD(v2) = sub_1402A188C(v10, &v11);
      if ( (int)v2 < 0 )
        LODWORD(v2) = sub_1406EBF2C(2);
    }
  }
  return v2;
}
