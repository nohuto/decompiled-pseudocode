/*
 * XREFs of sub_14081E300 @ 0x14081E300
 * Callers:
 *     sub_14081E150 @ 0x14081E150 (sub_14081E150.c)
 * Callees:
 *     IoAttachDeviceToDeviceStack @ 0x14024FBC0 (IoAttachDeviceToDeviceStack.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1403B8380 @ 0x1403B8380 (sub_1403B8380.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     sub_14081E450 @ 0x14081E450 (sub_14081E450.c)
 *     sub_14081E924 @ 0x14081E924 (sub_14081E924.c)
 */

NTSTATUS __fastcall sub_14081E300(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  NTSTATUS v4; // eax
  struct _DEVICE_OBJECT *v5; // rbx
  PDEVICE_OBJECT v6; // rcx
  _QWORD *DeviceExtension; // rsi
  PDEVICE_OBJECT v8; // rax
  _QWORD *v9; // rdi
  NTSTATUS result; // eax
  PDEVICE_OBJECT v11; // r14
  _QWORD *v12; // rbx
  PDEVICE_OBJECT v13; // rax
  PDEVICE_OBJECT v14; // rcx
  _QWORD *v15; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-10h] BYREF
  PDEVICE_OBJECT v17; // [rsp+48h] [rbp-8h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+A0h] [rbp+50h] BYREF
  PDEVICE_OBJECT v19; // [rsp+A8h] [rbp+58h] BYREF

  DeviceObject = 0LL;
  SourceDevice = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v4 = IoCreateDevice(DriverObject, 0x28u, 0LL, 0x2Au, 0, 0, &SourceDevice);
  if ( v4 < 0 )
    KeBugCheckEx(0x5Cu, 0x10EuLL, v4, 0LL, 0LL);
  v5 = SourceDevice;
  v6 = SourceDevice;
  DeviceExtension = SourceDevice->DeviceExtension;
  *(_DWORD *)DeviceExtension = 193;
  DeviceExtension[2] = TargetDevice;
  DeviceExtension[3] = v6;
  v6->Flags &= ~0x80u;
  v8 = IoAttachDeviceToDeviceStack(v6, TargetDevice);
  if ( v8 )
  {
    DeviceExtension[4] = v8;
    v9 = 0LL;
    if ( sub_1403B8380(0LL, 1414353488) && IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &v19) >= 0 )
    {
      v13 = v19;
      v9 = v19->DeviceExtension;
      *(_DWORD *)v9 = 192;
      v9[1] = 0LL;
      v9[2] = v13;
      v9[3] = DeviceExtension;
      *((_DWORD *)v9 + 8) = 132;
      v13->Flags &= ~0x80u;
    }
    result = IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &DeviceObject);
    if ( result >= 0 )
    {
      v11 = DeviceObject;
      Pdo = DeviceObject;
      v12 = DeviceObject->DeviceExtension;
      *(_DWORD *)v12 = 192;
      v12[1] = 0LL;
      v12[2] = v11;
      v12[3] = DeviceExtension;
      *((_DWORD *)v12 + 8) = 129;
      if ( v9 )
        v9[1] = v12;
      if ( (unsigned __int8)sub_14081E924() && IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &v17) >= 0 )
      {
        v14 = v17;
        v15 = v17->DeviceExtension;
        *(_DWORD *)v15 = 192;
        v15[1] = 0LL;
        v15[2] = v14;
        v15[3] = DeviceExtension;
        *((_DWORD *)v15 + 8) = 131;
        v12[1] = v15;
        v14->Flags &= ~0x80u;
      }
      v11->Flags &= ~0x80u;
      if ( v9 )
        v12 = v9;
      DeviceExtension[1] = v12;
      sub_14081E450();
      return 0;
    }
  }
  else
  {
    IoDeleteDevice(v5);
    return -1073741810;
  }
  return result;
}
