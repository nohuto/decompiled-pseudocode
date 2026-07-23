/*
 * XREFs of sub_140A834A0 @ 0x140A834A0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_140A834A0(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  struct _DEVICE_OBJECT **v3; // rcx
  PDEVICE_OBJECT v4; // rax
  struct _DEVICE_OBJECT *v5; // rbx
  NTSTATUS v6; // edi
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)sub_140A83200;
  DeviceObject = 0LL;
  qword_140D57618 = ExAllocatePool2(64LL, 8uLL, 0x61446656u);
  if ( !qword_140D57618 )
    return -1073741670;
  result = IoCreateDevice(DriverObject, 4u, 0LL, 0x22u, 0x180u, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v3 = (struct _DEVICE_OBJECT **)qword_140D57618;
    v4 = DeviceObject;
    *(_QWORD *)qword_140D57618 = DeviceObject;
    *(_DWORD *)v4->DeviceExtension = 0;
    v5 = *v3;
    v5->Flags &= ~0x80u;
    v6 = IoWMIRegistrationControl(v5, 1u);
    if ( v6 >= 0 )
    {
      return 0;
    }
    else
    {
      IoDeleteDevice(v5);
      return v6;
    }
  }
  return result;
}
