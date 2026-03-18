/*
 * XREFs of UsbhCreateDevice @ 0x1C001BC70
 * Callers:
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C001BE4C (UsbhLinkPdoDeviceHandle.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F800 (memset.c)
 *     Usbh_HubDerefDeviceHandle @ 0x1C002D868 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x1C003772C (UsbhGetDeviceHandle.c)
 *     UsbhGetTtDeviceHandle @ 0x1C0037D00 (UsbhGetTtDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C003A78C (Usbh_HubRemoveUsbDevice.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005AF58 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhCreateDevice(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  _DWORD *v9; // rdi
  _DWORD *v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // r10
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  unsigned int i; // edx
  int v16; // eax
  int v17; // edi
  unsigned int TtDeviceHandle; // r14d
  int v20; // eax
  int v21; // [rsp+20h] [rbp-B9h]
  void *v22; // [rsp+38h] [rbp-A1h]
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v24; // [rsp+54h] [rbp-85h]
  __int64 DeviceHandle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v26; // [rsp+60h] [rbp-79h] BYREF
  void *v27; // [rsp+68h] [rbp-71h]
  __int64 v28; // [rsp+70h] [rbp-69h]
  int v29[24]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v27 = (void *)a2;
  v7 = a4;
  v24 = a3;
  memset(&v29[1], 0, 0x50uLL);
  v28 = v4;
  DeviceHandle = 0LL;
  v23[0] = 0;
  v8 = (unsigned int)v4;
  Log(a1, 4, 1668441412, (unsigned int)v4, v7);
  v9 = FdoExt(a1);
  v10 = PdoExt(a2);
  v11 = 0xFEFEFEFEFEFEFEFEuLL;
  v26 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v8 & 0x400) != 0 )
    goto LABEL_2;
  if ( (v9[640] & 0x40) != 0 )
  {
    Log(a1, 4, 1668441137, v8, v7);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    v23[0] = v7;
    Log(a1, 4, 1668441138, DeviceHandle, v7);
    v12 = DeviceHandle;
    if ( !DeviceHandle )
    {
      v17 = -1073741823;
      UsbhException(a1, (unsigned __int16)v7, 5, 0, 0, -1073741823, -1, usbfile_bus_c, 6285, 0);
      return (unsigned int)v17;
    }
LABEL_3:
    if ( *((_QWORD *)v9 + 532) )
    {
      v29[0] = 1;
      if ( *((_WORD *)v9 + 2113) < 7u )
      {
        LOWORD(v21) = v7;
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, int, int *, unsigned __int16))v9 + 532))(
                *((_QWORD *)v9 + 529),
                &v26,
                v12,
                v24,
                v21,
                v29,
                v23[0]);
      }
      else
      {
        v13 = v10 + 672;
        v10[673] = *((unsigned __int16 *)v9 + 2604);
        v14 = v10 + 674;
        *(_OWORD *)(v10 + 674) = 0LL;
        v10[678] = 0;
        if ( *((_WORD *)v9 + 2604) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v20 = *((unsigned __int16 *)v9 + i + 2604);
            if ( !(_WORD)v20 )
              break;
            *v14++ = v20;
          }
        }
        else
        {
          i = 0;
        }
        *v13 = i + 1;
        v22 = v27;
        v13[i + 1] = v7;
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, _DWORD *, int *, unsigned __int16, void *, _DWORD *))v9
               + 561))(
                *((_QWORD *)v9 + 529),
                &v26,
                DeviceHandle,
                v24,
                v10 + 672,
                v29,
                v23[0],
                v22,
                v10 + 668);
      }
      v17 = v16;
      if ( DeviceHandle )
        Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a1, 1212445810LL);
      if ( (v17 & 0xC0000000) == 0xC0000000 )
      {
        if ( v29[1] == 5 )
          v10[705] = v29[2] != 0 ? 1073807365 : 1073807360;
        Log(a1, 4, 1667524129, v8, v7);
        UsbhException(a1, (unsigned __int16)v7, 4, (int)v29, 84, v17, -1, usbfile_bus_c, 6405, 0);
        UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_DEVICE_FAILURE, (unsigned int)v7, v29, 84);
        v26 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v11 = v26;
      }
      if ( v17 >= 0 )
      {
        v17 = UsbhLinkPdoDeviceHandle(a1, v27, v11);
        if ( (v17 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 4, 1819175713, v26, v7);
          Usbh_HubRemoveUsbDevice(a1, v26);
        }
      }
    }
    else
    {
      v17 = -1073741822;
      if ( v12 )
        Usbh_HubDerefDeviceHandle(a1, v12, a1, 1212445810LL);
    }
    return (unsigned int)v17;
  }
  Log(a1, 4, 1668441139, v8, v7);
  TtDeviceHandle = UsbhGetTtDeviceHandle(a1, &DeviceHandle, a1, v23);
  Log(a1, 4, 1668441140, DeviceHandle, v23[0]);
  if ( (TtDeviceHandle & 0xC0000000) != 0xC0000000 )
  {
    v8 = v28;
LABEL_2:
    v12 = DeviceHandle;
    goto LABEL_3;
  }
  UsbhException(a1, (unsigned __int16)v7, 104, 0, 0, TtDeviceHandle, -1, usbfile_bus_c, 6304, 0);
  return TtDeviceHandle;
}
