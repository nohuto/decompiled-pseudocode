/*
 * XREFs of ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00BC758
 * Callers:
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C01532B0 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C0156E30 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x1C0157180 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(struct _NDIS_OPEN_BLOCK *a1)
{
  KIRQL v2; // si
  struct _KEVENT *AfNotifyCompleteEvent; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x10u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
  if ( _InterlockedExchangeAdd(&a1->PendingAfNotifications, 0xFFFFFFFF) == 1 )
  {
    AfNotifyCompleteEvent = a1->AfNotifyCompleteEvent;
    if ( AfNotifyCompleteEvent )
      KeSetEvent(AfNotifyCompleteEvent, 0, 0);
  }
  KeReleaseSpinLock(&a1->SpinLock, v2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x11u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      a1);
}
