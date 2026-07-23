/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x140A08CB0
 * Callers:
 *     sub_14051C22C @ 0x14051C22C (sub_14051C22C.c)
 *     sub_14051C3E0 @ 0x14051C3E0 (sub_14051C3E0.c)
 *     sub_14057C1C0 @ 0x14057C1C0 (sub_14057C1C0.c)
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     sub_140A09FB4 @ 0x140A09FB4 (sub_140A09FB4.c)
 *     sub_140A0A2E8 @ 0x140A0A2E8 (sub_140A0A2E8.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140A08FFC @ 0x140A08FFC (sub_140A08FFC.c)
 */

__int64 __fastcall WheaAttemptPhysicalPageOffline(__int64 a1, char a2, char a3, char a4)
{
  unsigned __int64 v6; // rcx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  char v10; // [rsp+60h] [rbp-20h]
  char v11; // [rsp+61h] [rbp-1Fh]
  __int16 v12; // [rsp+62h] [rbp-1Eh]
  __int128 v13; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 Event_12; // [rsp+74h] [rbp-Ch]
  int Event_20; // [rsp+7Ch] [rbp-4h]

  WorkItem.List.Blink = 0LL;
  v6 = (unsigned __int64)(unsigned int)a1 << 12;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) != 1 || a4 )
    return sub_140A08FFC(v6, a1, a2, a3, 0, a4);
  Event_12 = 0LL;
  Event_20 = 0;
  v12 = 0;
  v9[0] = v6;
  v9[1] = a1;
  v11 = a3;
  v13 = 0LL;
  v10 = a2;
  KeInitializeEvent((PRKEVENT)((char *)&v13 + 4), NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A091D0;
  WorkItem.Parameter = v9;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v13 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v13;
}
