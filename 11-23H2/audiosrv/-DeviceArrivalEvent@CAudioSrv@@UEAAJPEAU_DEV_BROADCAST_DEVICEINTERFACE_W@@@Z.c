/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180009150
 * Callers:
 *     <none>
 * Callees:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x1800091F8 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 */

_BOOL8 __fastcall CAudioSrv::DeviceArrivalEvent(CAudioSrv *this, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  BOOL v3; // edi

  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
  RtlReleaseResource(&PnpInfoResource);
  a2 = (struct _DEV_BROADCAST_DEVICEINTERFACE_W *)((char *)a2 + 28);
  v3 = (int)FlushDeviceTopologyCache(a2) < 0;
  KsNotifications_AudioInterfaceArrival((const unsigned __int16 *)a2);
  if ( (int)FlushDeviceTopologyCache(a2) < 0 )
    return 1;
  return v3;
}
