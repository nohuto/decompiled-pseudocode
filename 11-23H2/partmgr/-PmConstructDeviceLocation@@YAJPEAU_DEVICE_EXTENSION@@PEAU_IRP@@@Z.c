/*
 * XREFs of ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z @ 0x1C001F240 (-PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001FBE4 (-PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 *     ?PmConstructDeviceLocationVhd@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0026718 (-PmConstructDeviceLocationVhd@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmConstructDeviceLocation(struct _DEVICE_EXTENSION *a1, struct _IRP *a2)
{
  __int64 v4; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int DevicePropertyString; // ebx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  unsigned int v23; // [rsp+40h] [rbp-29h] BYREF
  int Data; // [rsp+44h] [rbp-25h] BYREF
  ULONG Type; // [rsp+48h] [rbp-21h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v28[16]; // [rsp+60h] [rbp-9h] BYREF

  RequiredSize = 0;
  memset(v28, 0, sizeof(v28));
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 )
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  v23 = 0;
  v5 = 0LL;
  v27 = 0LL;
  Type = 0;
  Data = 0;
  if ( v4 )
    v5 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v4 + 16) + 32LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v28[0] = 65600;
  --CurrentStackLocation;
  v28[3] = -1;
  v28[2] = -1;
  memset(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
  *(_WORD *)&CurrentStackLocation->MajorFunction = 2331;
  CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v28;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741637;
  if ( (int)IoSynchronousCallDriver(*((_QWORD *)a1 + 2), a2) >= 0 )
    *((_DWORD *)a1 + 103) = v28[3];
  if ( v5 )
  {
    if ( IoGetDevicePropertyData(v5, &DEVPKEY_Device_BusNumber, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0 )
      *((_DWORD *)a1 + 108) = Data;
    if ( IoGetDevicePropertyData(v5, &DEVPKEY_Device_Address, 0, 0, 4u, &v23, &RequiredSize, &Type) >= 0 )
    {
      *((_DWORD *)a1 + 109) = HIWORD(v23);
      *((_DWORD *)a1 + 110) = (unsigned __int16)v23;
    }
  }
  DevicePropertyString = PmSendDeviceControl(*((PDEVICE_OBJECT *)a1 + 2), 0x41018u, 0LL, 0, &v27, 8u, 0);
  if ( DevicePropertyString < 0 )
  {
    DevicePropertyString = 0;
  }
  else
  {
    *((_DWORD *)a1 + 104) = BYTE4(v27);
    *((_DWORD *)a1 + 105) = BYTE5(v27);
    *((_DWORD *)a1 + 106) = BYTE6(v27);
    *((_DWORD *)a1 + 107) = HIBYTE(v27);
  }
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 29) + 28LL);
  if ( v8 <= 8 )
  {
    if ( v8 == 8
      || (v9 = v8 - 1) == 0
      || (v10 = v9 - 1) == 0
      || (v11 = v10 - 1) == 0
      || (v12 = v11 - 1) == 0
      || (v13 = v12 - 1) == 0
      || (v14 = v13 - 1) == 0 )
    {
      return (unsigned int)PmConstructDeviceLocationDefault(a1);
    }
    v22 = v14 == 1;
LABEL_31:
    if ( !v22 )
      return (unsigned int)DevicePropertyString;
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  }
  v16 = v8 - 10;
  if ( !v16 )
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  v17 = v16 - 1;
  if ( !v17 )
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  v18 = v17 - 1;
  if ( !v18 )
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  v19 = v18 - 1;
  if ( !v19 )
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  v20 = v19 - 2;
  if ( !v20 )
  {
    PmConstructDeviceLocationVhd(a1);
    return (unsigned int)DevicePropertyString;
  }
  v21 = v20 - 2;
  if ( v21 )
  {
    v22 = v21 == 2;
    goto LABEL_31;
  }
  if ( !v5 )
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  DevicePropertyString = PmGetDevicePropertyString(
                           v5,
                           (struct _DEVPROPKEY *)&DEVPKEY_PciDevice_Label_String,
                           (struct _UNICODE_STRING *)a1 + 28);
  if ( DevicePropertyString < 0 )
    return (unsigned int)PmConstructDeviceLocationDefault(a1);
  return (unsigned int)DevicePropertyString;
}
