/*
 * XREFs of _CmCreateDevice @ 0x1407D76A4
 * Callers:
 *     _PnpDispatchDevice @ 0x1406CD010 (_PnpDispatchDevice.c)
 *     PiCreateDeviceInstanceKey @ 0x1407D75F8 (PiCreateDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14095E648 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969BBC (PiCMGenerateDeviceInstance.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 *     _CmCreateDeviceWorker @ 0x1407D780C (_CmCreateDeviceWorker.c)
 */

__int64 __fastcall CmCreateDevice(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, HANDLE *); // rsi
  int v11; // eax
  int DeviceWorker; // eax
  int v13; // ebx
  int v14; // eax
  HANDLE v16[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, HANDLE *))(a1 + 504);
  if ( a3 || (LODWORD(v16[2]) = 1, a4) )
    LODWORD(v16[2]) = a3;
  HIDWORD(v16[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 1LL, 2LL, 1, v16);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_23;
    }
  }
  DeviceWorker = CmCreateDeviceWorker(a1, a2, v16[2], (unsigned int)&v16[3], (__int64)&v16[4], SWORD2(v16[4]));
  v13 = DeviceWorker;
  if ( v10 )
  {
    LODWORD(v16[0]) = DeviceWorker;
    v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v10)(a1, a2, 1LL);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_11;
LABEL_23:
        v13 = -1073741595;
        goto LABEL_24;
      }
LABEL_19:
      v13 = (int)v16[0];
    }
  }
LABEL_11:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v16[3];
LABEL_14:
    if ( a5 )
      *a5 = v16[4];
    return (unsigned int)v13;
  }
LABEL_24:
  if ( v16[3] )
    ZwClose(v16[3]);
  if ( v13 >= 0 )
    goto LABEL_14;
  return (unsigned int)v13;
}
