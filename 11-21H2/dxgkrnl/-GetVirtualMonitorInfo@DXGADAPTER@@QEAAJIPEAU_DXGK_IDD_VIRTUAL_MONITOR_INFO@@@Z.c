/*
 * XREFs of ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02BBB60
 * Callers:
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0165168 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C02090E0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0322E18 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax

  if ( (*((_DWORD *)this + 109) & 0x40000) != 0 )
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 259);
    if ( v4 )
      return v4(*((_QWORD *)this + 248), a2, a3);
  }
  WdLogSingleEntry2(2LL, this, -1073741822LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"GetVirtualMonitorInfo called on non-virtual adapter 0x%I64x, returning Status 0x%I64x",
    (__int64)this,
    -1073741822LL,
    0LL,
    0LL,
    0LL);
  return 3221225474LL;
}
