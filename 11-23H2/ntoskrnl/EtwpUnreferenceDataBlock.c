/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1407817E8
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406BED90 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE40 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x1406C0258 (EtwpRundownNotifications.c)
 *     EtwpReceiveReplyDataBlock @ 0x14077EDD0 (EtwpReceiveReplyDataBlock.c)
 *     EtwpQueueReply @ 0x14077EECC (EtwpQueueReply.c)
 *     EtwpNotifyGuid @ 0x14077F9E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14078163C (EtwpReceiveNotification.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E74D0 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ECDD0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
