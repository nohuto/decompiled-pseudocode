/*
 * XREFs of ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180002BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180002C9C (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 */

_BOOL8 __fastcall CAudioSrv::DeviceRemovalEvent(CAudioSrv *this, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_ea4dc79131a5388790567eb319c308bd_Traceguids, a2->dbcc_name);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
  RtlReleaseResource(&PnpInfoResource);
  KsNotifications_AudioInterfaceRemoval(a2->dbcc_name);
  return (int)FlushDeviceTopologyCache(a2->dbcc_name) < 0;
}
