/*
 * XREFs of sub_1C005BE2C @ 0x1C005BE2C
 * Callers:
 *     sub_1C0047794 @ 0x1C0047794 (sub_1C0047794.c)
 *     sub_1C005961C @ 0x1C005961C (sub_1C005961C.c)
 * Callees:
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C005BE2C(
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PLARGE_INTEGER Timeout,
        ULONG OutputBufferLength,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  NTSTATUS Status; // ebx
  PIRP v12; // rax
  _DWORD *v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  AttachedDeviceReference = 0LL;
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741496;
    goto LABEL_9;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v12 = IoBuildDeviceIoControlRequest(
          0x32C000u,
          AttachedDeviceReference,
          InputBuffer,
          InputBufferLength,
          Timeout,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F074(
        (__int64)off_1C0093070->AttachedDevice,
        0xDu,
        (__int64)&unk_1C008A520,
        DeviceObject,
        AttachedDeviceReference);
    }
    Status = -1073741670;
LABEL_9:
    v13 = a6;
    if ( !a6 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v12->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 && !IoStatusBlock.Information && OutputBufferLength )
    Status = -1073741823;
  v13 = a6;
  if ( a6 )
  {
    if ( Status < 0 )
    {
LABEL_10:
      *v13 = 0;
      goto LABEL_11;
    }
    *a6 = IoStatusBlock.Information;
  }
LABEL_11:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
