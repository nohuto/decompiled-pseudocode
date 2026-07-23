/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1407819D8
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406BEDC0 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE70 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x1406C0288 (EtwpRundownNotifications.c)
 *     EtwpReceiveReplyDataBlock @ 0x14077EFC0 (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x14077F0BC (EtwpQueueReply.c)
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14078182C (EtwpReceiveNotification.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7760 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ED060 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
