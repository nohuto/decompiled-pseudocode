/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005CACC
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005CE14 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C005109C (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SS @ 0x1C005B2B4 (WPP_RECORDER_SF_SS.c)
 *     CheckUSBFnConfiguration @ 0x1C005C27C (CheckUSBFnConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C005D0D4 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C005D154 (MyRegQueryString.c)
 */

__int64 __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1, char a2)
{
  const wchar_t *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  int String; // eax
  __int64 v9; // r8
  wchar_t *v10; // rdi
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  if ( !a2 )
    v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  v5 = MyRegOpenKeyForRead(a1, v2, &Handle);
  v6 = v5;
  if ( v5 >= 0 )
  {
    String = MyRegQueryString(Handle);
    v10 = (wchar_t *)P;
    v6 = String;
    if ( String >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SS(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          v9,
          0x20u,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          v2,
          (const wchar_t *)P);
      ZwClose(Handle);
      Handle = 0LL;
      v6 = CheckUSBFnConfiguration(a1, v10);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        v9,
        0x1Fu,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v2,
        String);
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    if ( a2 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v7 = 29;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 30;
LABEL_7:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        1u,
        v7,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v5);
    }
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
