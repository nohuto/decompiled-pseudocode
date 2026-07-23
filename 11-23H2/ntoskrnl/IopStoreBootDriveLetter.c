/*
 * XREFs of IopStoreBootDriveLetter @ 0x140B39740
 * Callers:
 *     IopMarkBootPartition @ 0x140B39DF0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
 *     RtlUnicodeStringPrintf @ 0x1403C4CCC (RtlUnicodeStringPrintf.c)
 *     IoGetDeviceObjectPointer @ 0x14075B450 (IoGetDeviceObjectPointer.c)
 *     RtlWriteRegistryValue @ 0x1407D45B0 (RtlWriteRegistryValue.c)
 *     RtlGetHostNtSystemRoot @ 0x1407EAF80 (RtlGetHostNtSystemRoot.c)
 */

__int64 __fastcall IopStoreBootDriveLetter(__int64 a1)
{
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v3; // rax
  UNICODE_STRING *HostNtSystemRoot; // rdi
  unsigned __int16 v5; // ax
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK v9; // [rsp+68h] [rbp+Fh] BYREF
  struct _KEVENT Object[2]; // [rsp+78h] [rbp+1Fh] BYREF
  char v11; // [rsp+C8h] [rbp+6Fh] BYREF
  int ValueData; // [rsp+D0h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D8h] [rbp+7Fh] BYREF

  ValueData = 0;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  v11 = 0;
  memset(Object, 0, 24);
  v9 = 0LL;
  FileObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    Object[0].Header.WaitListHead.Blink = &Object[0].Header.WaitListHead;
    Object[0].Header.Size = 6;
    Object[0].Header.WaitListHead.Flink = &Object[0].Header.WaitListHead;
    Object[0].Header.SignalState = 0;
    v3 = IopBuildDeviceIoControlRequest(7192644, (__int64)DeviceObject, 0LL, 0, &v11, 1u, 0, Object, &v9);
    if ( v3 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v3);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = v9.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
        HostNtSystemRoot->Buffer = (wchar_t *)(MmWriteableSharedUserData + 48);
        HostNtSystemRoot->MaximumLength = 520;
        DeviceObjectPointer = RtlUnicodeStringPrintf(HostNtSystemRoot, L"%C:%S", (unsigned int)v11, a1);
        if ( DeviceObjectPointer >= 0 )
        {
          v5 = HostNtSystemRoot->Length - 2;
          HostNtSystemRoot->Length = v5;
          HostNtSystemRoot->Buffer[(unsigned __int64)v5 >> 1] = 0;
          ValueData = v11;
          DeviceObjectPointer = RtlWriteRegistryValue(2u, 0LL, L"SystemBootDriveLetter", 4u, &ValueData, 4u);
        }
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
  }
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  return (unsigned int)DeviceObjectPointer;
}
