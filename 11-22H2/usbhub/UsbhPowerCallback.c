/*
 * XREFs of UsbhPowerCallback @ 0x1C00590C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhSshEnableDisable @ 0x1C005939C (UsbhSshEnableDisable.c)
 */

__int64 __fastcall UsbhPowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, _QWORD *Context)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // ecx

  v8 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v9 = Context[150];
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 && ValueLength == 4 && Value )
  {
    v10 = 2LL;
    v8 = 0;
    v11 = 2 - (*Value != 0);
    *((_DWORD *)Context + 1309) = v11;
    if ( v11 != 1 )
      v10 = 3LL;
    UsbhSshEnableDisable(v9, v10);
  }
  return v8;
}
