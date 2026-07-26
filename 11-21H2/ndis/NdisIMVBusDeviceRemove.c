/*
 * XREFs of NdisIMVBusDeviceRemove @ 0x1C005EF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEBU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C005EA54 (-ndisIMVBusIsValidInput@@YAEPEAXPEBU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     ?ndisVBusVirtMiniRemove@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00AD790 (-ndisVBusVirtMiniRemove@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 */

__int64 __fastcall NdisIMVBusDeviceRemove(_BYTE *a1, __int64 a2)
{
  unsigned int v4; // ebx
  char v6[4]; // [rsp+38h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x28u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      (char)a1,
      a2);
  if ( ndisIMVBusIsValidInput(a1, (const struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *)a2) )
    v4 = ndisVBusVirtMiniRemove((const struct _UNICODE_STRING *)(a2 + 8), (const struct _UNICODE_STRING *)(a2 + 24));
  else
    v4 = -1073741811;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v4;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      (char)a1,
      a2,
      *(_DWORD *)v6);
  }
  return v4;
}
