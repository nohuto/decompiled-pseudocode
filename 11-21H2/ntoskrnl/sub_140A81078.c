/*
 * XREFs of sub_140A81078 @ 0x140A81078
 * Callers:
 *     sub_140A80940 @ 0x140A80940 (sub_140A80940.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403D8834 @ 0x1403D8834 (sub_1403D8834.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall sub_140A81078(_QWORD *Object)
{
  bool v1; // zf
  __int64 v4; // rdx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  char v6; // [rsp+90h] [rbp+10h] BYREF

  v1 = Object[13] == 0LL;
  v6 = 0;
  if ( v1 )
    return 3221225488LL;
  ObfReferenceObject(Object);
  if ( (int)sub_1403D8834(Object, &v6) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v6 )
    return 259LL;
  if ( *((PEPROCESS *)KeGetCurrentThread() + 23) == PsInitialSystemProcess )
  {
    sub_14042A5E0(Object, v4);
  }
  else
  {
    memset(WorkItem, 0, sizeof(WorkItem));
    KeInitializeEvent((PRKEVENT)&WorkItem[32], NotificationEvent, 0);
    *(_QWORD *)WorkItem = 0LL;
    *(_QWORD *)&WorkItem[16] = sub_1406DE800;
    *(_QWORD *)&WorkItem[56] = Object;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  ObfDereferenceObject(Object);
  return 0LL;
}
