/*
 * XREFs of EtwpReleaseQueueEntry @ 0x140781810
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406BED90 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1406C0258 (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x14077EF3C (EtwpSendReplyDataBlock.c)
 *     EtwpQueueNotification @ 0x1407811E4 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x14078163C (EtwpReceiveNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x140715700 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
