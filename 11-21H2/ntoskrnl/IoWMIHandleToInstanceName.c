/*
 * XREFs of IoWMIHandleToInstanceName @ 0x1406C1900
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1406C1980 (IoWMIDeviceObjectToInstanceName.c)
 *     sub_1406C1BD4 @ 0x1406C1BD4 (sub_1406C1BD4.c)
 */

NTSTATUS __stdcall IoWMIHandleToInstanceName(PVOID DataBlockObject, HANDLE FileHandle, PUNICODE_STRING InstanceName)
{
  int v5; // ebx
  UNICODE_STRING *v6; // r8
  PDEVICE_OBJECT v7; // rdi
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  v5 = sub_1406C1BD4(FileHandle, 0LL, &DeviceObject);
  if ( v5 >= 0 )
  {
    v6 = InstanceName;
    v7 = DeviceObject;
    v5 = IoWMIDeviceObjectToInstanceName(DataBlockObject, DeviceObject, v6);
    if ( v5 >= 0 )
      v5 = 0;
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  return v5;
}
