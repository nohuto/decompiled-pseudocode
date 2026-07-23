/*
 * XREFs of sub_1409AF410 @ 0x1409AF410
 * Callers:
 *     sub_1409D9920 @ 0x1409D9920 (sub_1409D9920.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 */

NTSTATUS __fastcall sub_1409AF410(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  NTSTATUS result; // eax
  NTSTATUS v3; // ett
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+80h] [rbp+10h] BYREF

  v1 = (volatile signed __int32 *)a1 + 543;
  memset(&Event, 0, sizeof(Event));
  memset(&WorkItem, 0, sizeof(WorkItem));
  _m_prefetchw((char *)a1 + 2172);
  result = *((_DWORD *)a1 + 543);
  for ( LODWORD(v8) = result; ; LODWORD(v8) = result )
  {
    if ( (result & 0x800000) != 0 )
    {
      if ( (result & 0x1000000) != 0 )
      {
        do
        {
          ExBlockOnAddressPushLock((__int64)&qword_140C1BEF8, v1, &v8, 4uLL, 0LL);
          LODWORD(v8) = *v1;
          result = v8;
        }
        while ( (v8 & 0x1000000) != 0 );
      }
      return result;
    }
    v3 = result;
    result = _InterlockedCompareExchange(v1, result | 0x1800000, result);
    if ( v3 == result )
      break;
  }
  if ( !a1[316] )
  {
    _InterlockedOr(v1, 0x200000u);
    v4 = _InterlockedIncrement64(&qword_140C0BAF8);
    a1[316] = v4;
    a1[317] = v4;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409AFA60;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
  result = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  _InterlockedAnd(v1, 0xFEFFFFFF);
  _InterlockedOr(v5, 0);
  if ( qword_140C1BEF8 )
    return ExfUnblockPushLock(&qword_140C1BEF8, 0LL);
  return result;
}
