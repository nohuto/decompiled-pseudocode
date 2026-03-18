/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x14078F0FC
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x1406B9918 (EtwpReceiveReplyDataBlock.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x1406F20E8 (EtwpQueueReply.c)
 *     EtwpReceiveNotification @ 0x14078EF08 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x140797468 (EtwpRundownNotifications.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
