/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x1C00679F0
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0023A44 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0064CE0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006635C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  unsigned __int8 *NdisReserved; // rcx
  KIRQL v5; // dl
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD Parameter[5]; // [rsp+48h] [rbp-28h] BYREF
  KIRQL NewIrql; // [rsp+80h] [rbp+10h] BYREF

  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = NetDevicePnPEvent;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFDevicePnPEventNotifyInternal,
         Parameter,
         (unsigned int)Size,
         0,
         0LL) < 0 )
  {
    NewIrql = 0;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 264;
    if ( *((_QWORD *)NdisFilterHandle + 33) )
      NdisReserved = NetDevicePnPEvent->NdisReserved;
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v5 = NewIrql;
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v5);
    ndisWaitForKernelObject(&Event);
  }
}
