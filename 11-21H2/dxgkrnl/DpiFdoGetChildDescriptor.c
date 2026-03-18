/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C001E234
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C001E0CC (DpiSetTargetAdjustedColorimetry2.c)
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     DpiProcessOpmVmBusRequest @ 0x1C0065114 (DpiProcessOpmVmBusRequest.c)
 *     DpEvalAcpiMethod @ 0x1C01E2B10 (DpEvalAcpiMethod.c)
 *     DpiPdoIsChildConnected @ 0x1C01F35DC (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C02176F4 (DpiGetMonitorColorimetryOverride.c)
 *     ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C021A9D0 (-GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C021BC00 (-GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C021BCB0 (-GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C038A234 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C0397438 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiPdoPollingWorkItem @ 0x1C03978B0 (DpiPdoPollingWorkItem.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C03982D0 (DpiSetTargetAdjustedColorimetry.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 3464);
  v3 = *(_QWORD **)(a1 + 3464);
  do
  {
    if ( v3 == v2 )
      return 0LL;
    v4 = v3 - 4;
    v3 = (_QWORD *)*v3;
  }
  while ( *((_DWORD *)v4 + 6) != a2 );
  return v4;
}
