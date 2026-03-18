/*
 * XREFs of MonitorGetCCDMonitorID @ 0x1C01B0200
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01A267C (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01AFC48 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C01B0070 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01D6F5C (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01D7150 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 * Callees:
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x1C01B02B0 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(DXGMONITOR **this, unsigned int a2, unsigned __int16 *a3)
{
  DXGMONITOR *v5; // rbx
  unsigned int CCDMonitorID; // eax
  struct _ERESOURCE *v7; // rcx
  unsigned int v8; // ebx

  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 78) == 1 || (v5 = this[40]) == 0LL )
    v5 = (DXGMONITOR *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 24), 1u);
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID(v5, 1, a2, a3);
  v7 = (struct _ERESOURCE *)((char *)v5 + 24);
  v8 = CCDMonitorID;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return v8;
}
