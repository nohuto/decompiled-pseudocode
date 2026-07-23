/*
 * XREFs of WheaAttemptClearPoison @ 0x140A08BE0
 * Callers:
 *     sub_14051C22C @ 0x14051C22C (sub_14051C22C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140A08FFC @ 0x140A08FFC (sub_140A08FFC.c)
 */

__int64 __fastcall WheaAttemptClearPoison(__int64 a1, char a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-30h] BYREF
  char v5; // [rsp+60h] [rbp-20h]
  __int16 v6; // [rsp+61h] [rbp-1Fh]
  char v7; // [rsp+63h] [rbp-1Dh]
  __int128 v8; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 Event_12; // [rsp+74h] [rbp-Ch]
  int Event_20; // [rsp+7Ch] [rbp-4h]

  WorkItem.List.Blink = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) != 1 )
    return sub_140A08FFC(a1, a1 >> 12, a2, 1, 1, 0);
  Event_12 = 0LL;
  Event_20 = 0;
  v4[0] = a1;
  v4[1] = a1 >> 12;
  v5 = a2;
  v8 = 0LL;
  v6 = 257;
  v7 = 0;
  KeInitializeEvent((PRKEVENT)((char *)&v8 + 4), NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A091D0;
  WorkItem.Parameter = v4;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v8 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v8;
}
