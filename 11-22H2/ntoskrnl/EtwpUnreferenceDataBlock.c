/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140781CF8
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406BEDE0 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x1406C02A8 (EtwpRundownNotifications.c)
 *     EtwpReceiveReplyDataBlock @ 0x14077F2E0 (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x14077F3DC (EtwpQueueReply.c)
 *     EtwpNotifyGuid @ 0x14077FEF8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x140781B4C (EtwpReceiveNotification.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7580 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ECE80 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
