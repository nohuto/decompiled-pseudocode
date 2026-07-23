/*
 * XREFs of RtlpCtContextInit @ 0x180110544
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x180110290 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x180060F60 (TpAllocWork.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800613FC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     ZwCreateEvent @ 0x1800A17B0 (ZwCreateEvent.c)
 *     RtlpCtContextFree @ 0x1801104E8 (RtlpCtContextFree.c)
 */

__int64 __fastcall RtlpCtContextInit(_QWORD *a1, int a2)
{
  PVOID Heap; // rbx
  int Event; // edi

  *a1 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  if ( Heap )
  {
    *(_OWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 2) = 0LL;
    Event = ZwCreateEvent((PHANDLE)Heap + 2, 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( Event < 0
      || (Event = TpAllocWork((PTP_WORK *)Heap, RtlpRtlpCtWaitForWnfQuiescentWorker, Heap, 0LL), Event < 0)
      || (Event = RtlpSubscribeWnfStateChangeNotificationInternal(
                    (PVOID *)Heap + 1,
                    WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                    a2,
                    (int)RtlpRtlpCtSelfSubscribeCallback,
                    (__int64)Heap,
                    0LL,
                    0,
                    4,
                    17),
          Event < 0) )
    {
      RtlpCtContextFree((__int64)Heap);
    }
    else
    {
      *a1 = Heap;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
