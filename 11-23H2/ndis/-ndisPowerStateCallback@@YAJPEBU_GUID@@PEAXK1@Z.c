/*
 * XREFs of ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0030F90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C014B820 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

__int64 __fastcall ndisPowerStateCallback(
        LPCGUID SettingGuid,
        enum _NDIS_DEVICE_PNP_EVENT *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rax
  enum _NDIS_DEVICE_PNP_EVENT v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  if ( Value && ValueLength >= 4 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xA2u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        *Value);
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    if ( !v6 )
    {
      v7 = *Value;
      v8 = 1;
      v9 = (_BYTE)ndisAcOnLine == 1;
      if ( *Value && (--v7, (unsigned int)v7 <= NdisDevicePnPEventRemoved) )
      {
        ndisAcOnLine = 0;
        v8 = 0;
      }
      else
      {
        ndisAcOnLine = 1;
      }
      v12 = v8;
      if ( v8 != v9 )
        ndisNotifyMiniports(0LL, v7, &v12, (unsigned int)Context);
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      SLODWORD(v11) = *Value;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xA3u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        v11);
    }
  }
  return 0LL;
}
