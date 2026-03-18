/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C0029DB0
 * Callers:
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C002D73C (UsbhReinitialize.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0004A70 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002C234 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C002C9B4 (UsbhGetMaxPowerPerPort.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0031E3C (UsbhCreateConfigurationRequestEx.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C0031F38 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhValidateConfigurationDescriptor @ 0x1C00525F0 (UsbhValidateConfigurationDescriptor.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 HubConfigurationDescriptor; // rbp
  unsigned __int16 *v5; // rbx
  unsigned int v6; // r9d
  int v7; // eax
  int MaxPowerPerPort; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 ConfigurationRequest; // rax
  unsigned __int64 v16; // rbp
  NTSTATUS v17; // r14d
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h]

  P = 0LL;
  v21 = 0;
  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  HubConfigurationDescriptor = (int)UsbhGetHubConfigurationDescriptor(a1);
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return (unsigned int)HubConfigurationDescriptor;
  }
  v5 = (unsigned __int16 *)P;
  if ( !P )
  {
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return v6;
  }
  if ( !(unsigned __int8)UsbhValidateConfigurationDescriptor(P, *((unsigned __int16 *)P + 1), &v21, 0LL) )
  {
    UsbhException(a1, 0, 34, (int)v5, v5[1], -1073741823, v21, usbfile_hub_c, 4345, 0);
    Log(a1, 8, 1667655731, HubConfigurationDescriptor, 0LL);
LABEL_10:
    ExFreePoolWithTag(v5, 0);
    return 3221225473LL;
  }
  if ( (*((_BYTE *)v5 + 7) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        27,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
    v7 = 500;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        28,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
    v7 = 100;
  }
  v2[760] = v7;
  MaxPowerPerPort = UsbhGetMaxPowerPerPort(a1);
  v2[758] = MaxPowerPerPort;
  if ( MaxPowerPerPort == 100 )
    *((_BYTE *)v5 + 8) = -6;
  v9 = v2[640];
  if ( (v9 & 0x40) == 0 )
  {
    v10 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v5, (_DWORD)v5, -1, v18, 9, -1, -1);
    goto LABEL_38;
  }
  v2[640] = v9 & 0xFFFEFFFF;
  v10 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v5, (_DWORD)v5, -1, v18, 9, -1, 2);
  if ( v10 )
  {
    v12 = v2[640];
    v2[640] = v12 | 0x10000;
    if ( (v12 & 0x200000) == 0 )
    {
      v2[640] = v12 | 0x10080;
      goto LABEL_27;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        29,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  }
  v2[640] &= ~0x80u;
  v10 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v5, (_DWORD)v5, -1, v19, 9, -1, 1);
  if ( !v10 )
  {
    v14 = v2[640];
    if ( (v14 & 1) != 0 )
      v2[640] = v14 & 0xFFFFFFBF;
    v10 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v5, (_DWORD)v5, -1, v20, 9, -1, 0);
LABEL_38:
    if ( !v10 )
    {
      UsbhException(a1, 0, 18, (int)v5, v5[1], -1073741823, 0, usbfile_hub_c, 4478, 0);
      Log(a1, 8, 1667655732, v5[1], (__int64)v5);
      goto LABEL_10;
    }
  }
LABEL_27:
  v13 = *(unsigned __int8 *)(v10 + 5);
  if ( (_BYTE)v13 != 9 )
  {
    Log(a1, 8, 1667655733, *(unsigned __int8 *)(v10 + 5), (__int64)v5);
    if ( !v5 )
      return 3221225473LL;
    goto LABEL_10;
  }
  ConfigurationRequest = UsbhCreateConfigurationRequestEx(v13, v5, v11, v10);
  v16 = ConfigurationRequest;
  if ( ConfigurationRequest )
  {
    v17 = UsbhSyncSendInternalIoctl(a1, 0x220003u, ConfigurationRequest, 0LL);
    Log(a1, 8, 1667655735, 0LL, v17);
    if ( v17 >= 0 )
    {
      *(_OWORD *)(v2 + 658) = *(_OWORD *)(v16 + 64);
      *((_QWORD *)v2 + 331) = *(_QWORD *)(v16 + 80);
      *((_QWORD *)v2 + 328) = *(_QWORD *)(v16 + 32);
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v17;
  }
  else
  {
    Log(a1, 8, 1667655734, 0LL, 0LL);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return 3221225626LL;
  }
}
