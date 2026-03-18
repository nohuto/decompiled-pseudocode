/*
 * XREFs of DpiIsDriverUpdateInProgress @ 0x1C0161968
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DpiGetDevicePropertyDataBoolean @ 0x1C0161A00 (DpiGetDevicePropertyDataBoolean.c)
 */

char __fastcall DpiIsDriverUpdateInProgress(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  int DevicePropertyDataBoolean; // eax
  char v6; // bl
  int v7; // eax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  DevicePropertyDataBoolean = DpiGetDevicePropertyDataBoolean(
                                *(_QWORD *)(v2 + 152),
                                &DEVPKEY_Device_InstallInProgress,
                                &v9);
  if ( DevicePropertyDataBoolean < 0 )
    WdLogSingleEntry1(2LL, DevicePropertyDataBoolean);
  v6 = v9;
  if ( !v9 && *(_DWORD *)(v4 + 28) < 0x6000u )
  {
    v7 = DpiGetDevicePropertyDataBoolean(*(_QWORD *)(v2 + 152), &DEVPKEY_Device_IsRebootRequired, &v10);
    if ( v7 < 0 )
      WdLogSingleEntry1(2LL, v7);
    if ( v10 )
    {
      v6 = 1;
      *a2 = 1;
    }
  }
  return v6;
}
