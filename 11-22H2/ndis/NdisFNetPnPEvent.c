/*
 * XREFs of NdisFNetPnPEvent @ 0x1C0015750
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C001564C (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006635C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisFNetPnPEvent(
        NDIS_HANDLE NdisFilterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  PNET_PNP_EVENT_NOTIFICATION *i; // rcx
  KIRQL v6; // dl
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD Parameter[5]; // [rsp+48h] [rbp-28h] BYREF
  KIRQL NewIrql; // [rsp+80h] [rbp+10h] BYREF

  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = NetPnPEventNotification;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFNetPnPEventInternal,
         Parameter,
         (unsigned int)Size,
         0,
         0LL) >= 0 )
    return Parameter[0];
  NewIrql = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
  for ( i = (PNET_PNP_EVENT_NOTIFICATION *)((char *)NdisFilterHandle + 256);
        *i;
        i = (PNET_PNP_EVENT_NOTIFICATION *)&(*i)->NetPnPEvent.NdisReserved[3] )
  {
    ;
  }
  *i = NetPnPEventNotification;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[3] = 0LL;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
  ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
  v6 = NewIrql;
  *((_QWORD *)NdisFilterHandle + 19) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
  ndisWaitForKernelObject(&Event);
  return NetPnPEventNotification->NetPnPEvent.NdisReserved[1];
}
