/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x140A08CB0
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14051C22C (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x14051C3E0 (HalpPmemErrorDeferredHandler.c)
 *     KiAltContextProcessMcheckAltReturn @ 0x14057C1C0 (KiAltContextProcessMcheckAltReturn.c)
 *     KiMcheckAlternateReturn @ 0x14057C3C0 (KiMcheckAlternateReturn.c)
 *     WheapPfaMemoryCheck @ 0x140A09FB4 (WheapPfaMemoryCheck.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A0A2E8 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A08FFC (WheapAttemptPhysicalPageOffline.c)
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
  if ( KeGetCurrentThread()->PreviousMode != 1 || a4 )
    return WheapAttemptPhysicalPageOffline(v6, a1, a2, a3, 0, a4);
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
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v9;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v13 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v13;
}
