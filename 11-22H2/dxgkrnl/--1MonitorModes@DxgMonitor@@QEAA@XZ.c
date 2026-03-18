/*
 * XREFs of ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03CC508
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0208314 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C8E3C (--1DXGMONITOR@@UEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03C92E8 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03CC560 (-CopyInstance@MonitorModes@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_.c)
 * Callees:
 *     ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1C020EE5C (-_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1C03CCE1C (-_CleanupRegistryOverridedFrequencyRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorModes::~MonitorModes(DxgMonitor::MonitorModes *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 56);
  if ( v1 )
    WdLogSingleEntry2(2LL, v1, this);
  DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges(this);
  DxgMonitor::MonitorModes::_CleanupRegistryOverridedFrequencyRanges(this);
  ExDeleteResourceLite((PERESOURCE)this);
}
