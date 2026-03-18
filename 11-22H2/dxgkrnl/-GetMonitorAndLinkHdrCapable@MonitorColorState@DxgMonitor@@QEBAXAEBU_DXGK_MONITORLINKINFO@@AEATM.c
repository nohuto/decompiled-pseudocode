/*
 * XREFs of ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01DA948
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0178EE0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01A0250 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021F3E0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C022211C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03C4434 (MonitorIsMonitorAndLinkHDRCapable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C019DDDC (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        union MONITOR_AND_LINK_HDR_CAPS *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // ebx
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  bool v15; // zf
  DXGK_MONITORLINKINFO_CAPABILITIES v16; // r9d
  BOOL v17; // esi
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) < 2500 )
  {
    v16.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)a2->Capabilities;
    v9 = 4;
    v17 = (*(_BYTE *)&v16.0 & 4) != 0 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
    v14 = (v17 | *(_DWORD *)a3 & 0xFFFFFFFE) ^ (*((_BYTE *)&v16.0 + 1) ^ (unsigned __int8)(*(_BYTE *)a3 | v17)) & 2;
    v15 = (*(_WORD *)&v16.0 & 0x400) == 0;
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 40LL))(v7, &v18);
  v8 = v18;
  v9 = 4;
  if ( ((v18 & 4) != 0 || (v18 & 8) != 0) && (*(_BYTE *)&a2->Capabilities.0 & 4) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 88LL))(*(_QWORD *)this)
      || DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
    {
      v8 = v18;
      v10 = 1;
      goto LABEL_11;
    }
    v8 = v18;
  }
  v10 = 0;
LABEL_11:
  v11 = v10 | *(_DWORD *)a3 & 0xFFFFFFFE;
  v12 = (v8 >> 2) & 1;
  if ( v12 && (a2->Capabilities.Value & 0x200) != 0 )
    v13 = 2;
  else
    v13 = 0;
  v14 = v13 | v11 & 0xFFFFFFFD;
  if ( !v12 )
    goto LABEL_24;
  v15 = (a2->Capabilities.Value & 0x400) == 0;
LABEL_22:
  if ( v15 || !*((_BYTE *)this + 340) )
LABEL_24:
    v9 = 0;
  *(_DWORD *)a3 = v9 | v14 & 0xFFFFFFFB;
}
