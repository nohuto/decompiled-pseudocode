/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C00221BC
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067F38 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C022211C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9D30 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C02224F8 (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C022256C (MonitorIsPhysicalMonitor.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(DMMVIDEOPRESENTTARGET *this, struct HDXGMONITOR__ *a2)
{
  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
  *(_BYTE *)(*((_QWORD *)this + 67) + 168LL) = 14;
  *((_BYTE *)this + 415) = MonitorIsPhysicalMonitor(a2);
  *((_QWORD *)this + 14) = a2;
  if ( !a2 || (int)MonitorGetLinkInfoFromMonitor(a2, (char *)this + 552) < 0 )
  {
    *((_QWORD *)this + 69) = 0LL;
    *((_DWORD *)this + 140) = 0;
  }
}
