/*
 * XREFs of sub_140B2FB90 @ 0x140B2FB90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 */

__int64 __fastcall sub_140B2FB90(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  *(_DWORD *)(&DeviceName.MaximumLength + 1) = 0;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)sub_1406B8840;
  DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)sub_1406B8840;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)sub_1406B8840;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)sub_1406B8840;
  memset(&dword_140C44640, 0, 0xE0uLL);
  dword_140C44640 = 224;
  qword_140C44690 = (__int64)sub_1406B8920;
  DriverObject->FastIoDispatch = (PFAST_IO_DISPATCH)&dword_140C44640;
  DeviceName.Buffer = L"\\Device\\DeviceApi";
  *(_DWORD *)&DeviceName.Length = 2359330;
  v2 = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x20000u, 0, &DeviceObject);
  if ( v2 < 0 )
  {
    if ( DeviceObject )
      ObfDereferenceObjectWithTag(DeviceObject, 0x746C6644u);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
  }
  return (unsigned int)v2;
}
