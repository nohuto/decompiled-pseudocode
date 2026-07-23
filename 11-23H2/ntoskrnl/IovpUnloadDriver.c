/*
 * XREFs of IovpUnloadDriver @ 0x140AC1EA8
 * Callers:
 *     IovUnloadDrivers @ 0x140AC17E0 (IovUnloadDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     IopCheckUnloadDriver @ 0x1403ABEFC (IopCheckUnloadDriver.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FF68 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObMakeTemporaryObject @ 0x1407E0F60 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rbx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  char v6; // [rsp+90h] [rbp+10h] BYREF

  v6 = 0;
  if ( !Object[13] )
    return 3221225488LL;
  ObfReferenceObject(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v6) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v6 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    if ( (unsigned int)Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage() )
    {
      v3 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
      v4 = PsAttachSiloToCurrentThread(v3);
      ((void (__fastcall *)(_QWORD *))Object[13])(Object);
      PsDetachSiloFromCurrentThread(v4);
    }
    else
    {
      ((void (__fastcall *)(_QWORD *))Object[13])(Object);
    }
  }
  else
  {
    memset(WorkItem, 0, sizeof(WorkItem));
    KeInitializeEvent((PRKEVENT)&WorkItem[32], NotificationEvent, 0);
    *(_QWORD *)&WorkItem[56] = Object;
    *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
    *(_QWORD *)WorkItem = 0LL;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  ObfDereferenceObject(Object);
  return 0LL;
}
