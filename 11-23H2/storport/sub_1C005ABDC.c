/*
 * XREFs of sub_1C005ABDC @ 0x1C005ABDC
 * Callers:
 *     sub_1C005AB08 @ 0x1C005AB08 (sub_1C005AB08.c)
 * Callees:
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 */

__int64 __fastcall sub_1C005ABDC(PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, __int64 a3, void *a4)
{
  NTSTATUS Status; // ebx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v9; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1073741496;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    if ( AttachedDeviceReference )
    {
      v9 = IoBuildDeviceIoControlRequest(
             0x32C038u,
             AttachedDeviceReference,
             InputBuffer,
             0x9Bu,
             a4,
             0x20u,
             0,
             &Event,
             &IoStatusBlock);
      if ( v9 )
      {
        v9->IoStatus.Status = -1073741637;
        Status = IofCallDriver(AttachedDeviceReference, v9);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 && !IoStatusBlock.Information )
          Status = -1073741823;
      }
      else
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
          && BYTE1(off_1C0093070->Timer) >= 2u )
        {
          sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0xCu, (__int64)&unk_1C008A520, DeviceObject);
        }
        Status = -1073741670;
      }
      ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Status;
}
