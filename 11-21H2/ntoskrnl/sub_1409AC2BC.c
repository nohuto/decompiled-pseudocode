/*
 * XREFs of sub_1409AC2BC @ 0x1409AC2BC
 * Callers:
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 */

__int64 __fastcall sub_1409AC2BC(__int64 a1, void *a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v6)(PVOID); // [rsp+68h] [rbp-18h]
  void *v7; // [rsp+70h] [rbp-10h]
  unsigned int v8; // [rsp+78h] [rbp-8h]
  int v9; // [rsp+7Ch] [rbp-4h]

  WorkItem.List.Blink = 0LL;
  memset(&Event, 0, sizeof(Event));
  v9 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    return sub_1409AC180(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  v6 = sub_1409AC180;
  v7 = a2;
  WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409ABEA0;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
