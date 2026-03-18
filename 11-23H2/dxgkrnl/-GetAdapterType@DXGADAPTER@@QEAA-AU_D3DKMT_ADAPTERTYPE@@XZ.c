/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01B625C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01A1184 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0219510 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021A2B8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B96C8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BA418 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0004CF8 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  __int64 v4; // rdx
  int v5; // r11d
  int v6; // r8d
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  v4 = *((_QWORD *)this + 366);
  v5 = *((_DWORD *)this + 109) & 4 | (v4 != 0) | (8 * (*((_DWORD *)this + 109) & 1)) | (*((_DWORD *)this + 109) >> 2) & 0x40 | (*((_BYTE *)this + 209) != 0 ? 0x80 : 0) | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0) | (*((_QWORD *)this + 365) != 0LL ? 2 : 0);
  if ( *((int *)this + 638) >= 8704
    && *((_DWORD *)this + 524) >= 0x7007u
    && *((_QWORD *)this + 144)
    && (!v4 || *((_QWORD *)this + 128)) )
  {
    v6 = 512;
  }
  else
  {
    v6 = 0;
  }
  v7 = *((_DWORD *)this + 698) >> 3;
  v8 = v6 | v5 | (16
                * (*((_BYTE *)this + 2759) & 1 | (2
                                                * ((16 * (*((_DWORD *)this + 698) & 2)) | *((_BYTE *)this + 2764) & 1))));
  *a2 = v8;
  if ( (v7 & 1) != 0 )
  {
    v9 = *((_DWORD *)this + 571);
    *a2 = v8 | 0x800;
    if ( (v9 & 0x80u) == 0 && !DXGADAPTER::IsGpuVirtualAddressingSupported(this) )
      *a2 |= 0x1000u;
  }
  return a2;
}
