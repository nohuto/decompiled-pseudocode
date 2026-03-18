/*
 * XREFs of MonitorGetLinkInfoFromTarget @ 0x1C01A6260
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C01A04AC (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromTarget(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  DXGMONITOR *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    a3 = -1073741811LL;
    goto LABEL_9;
  }
  if ( a2 != -1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v6, a1, a2);
    if ( v6 )
    {
      LODWORD(a3) = DXGMONITOR::_GetLinkInfo(v6, (struct _DXGK_MONITORLINKINFO *)a3);
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
      KeLeaveCriticalRegion();
      return (unsigned int)a3;
    }
    a3 = -1073741275LL;
LABEL_9:
    WdLogSingleEntry1(2LL, a3);
    return (unsigned int)a3;
  }
  return -1073741275LL;
}
