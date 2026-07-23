/*
 * XREFs of PopRegisterCoolingExtensionProtection @ 0x140983494
 * Callers:
 *     PopAssociateThermalRequest @ 0x14084E300 (PopAssociateThermalRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140302D80 (IoGetDeviceAttachmentBaseRef.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     IoGetDeviceObjectPointer @ 0x14075B450 (IoGetDeviceObjectPointer.c)
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopRegisterCoolingExtensionProtection(char *Context)
{
  PVOID *NotificationEntry; // r12
  bool v3; // zf
  NTSTATUS DeviceProperty; // ebx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rdi
  void *Pool2; // rsi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp+38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+40h] BYREF

  BufferLength = 0;
  NotificationEntry = (PVOID *)(Context + 56);
  DeviceObject = 0LL;
  FileObject = 0LL;
  v3 = *((_QWORD *)Context + 7) == 0LL;
  DestinationString = 0LL;
  if ( v3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*((PDEVICE_OBJECT *)Context + 6));
    if ( IoGetDeviceProperty(DeviceAttachmentBaseRef, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 1819231056LL);
      if ( Pool2 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           Pool2,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
          DeviceProperty = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
          if ( DeviceProperty >= 0 )
            DeviceProperty = IoRegisterPlugPlayNotification(
                               EventCategoryTargetDeviceChange,
                               0,
                               FileObject,
                               DeviceObject->DriverObject,
                               (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCoolingExtensionPnpNotification,
                               Context,
                               NotificationEntry);
          if ( FileObject )
            ObfDereferenceObject(FileObject);
        }
        ExFreePoolWithTag(Pool2, 0x6C6F4350u);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    else
    {
      DeviceProperty = -1073741823;
    }
    if ( DeviceAttachmentBaseRef )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
  }
  else
  {
    return 0;
  }
  return (unsigned int)DeviceProperty;
}
