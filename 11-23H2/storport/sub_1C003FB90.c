/*
 * XREFs of sub_1C003FB90 @ 0x1C003FB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003609C @ 0x1C003609C (sub_1C003609C.c)
 *     sub_1C003AF2C @ 0x1C003AF2C (sub_1C003AF2C.c)
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C0058EFC @ 0x1C0058EFC (sub_1C0058EFC.c)
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 */

__int64 __fastcall sub_1C003FB90(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *v4; // rsi
  int v5; // edi
  _QWORD *DeviceExtension; // rbx
  KSPIN_LOCK *DriverObjectExtension; // r14
  PDEVICE_OBJECT v8; // rax
  int v10; // eax
  KSPIN_LOCK **v11; // rax
  KSPIN_LOCK v12; // rdx
  KSPIN_LOCK *v13; // rcx
  struct _UNICODE_STRING DeviceName; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+B0h] [rbp+40h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C0089898, DriverObject, DeviceObject);
  }
  SourceDevice = 0LL;
  v4 = 0LL;
  DeviceName = 0LL;
  sub_1C0058EFC(DeviceObject, &DeviceName, &v16);
  v5 = IoCreateDevice(DriverObject, 48 * (dword_1C0093430 + 128), &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( v5 >= 0 )
  {
    DeviceExtension = SourceDevice->DeviceExtension;
    v5 = sub_1C003AF2C(DeviceExtension);
    if ( v5 < 0 )
      goto LABEL_9;
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(DriverObject, StorPortGetSrb);
    v8 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
    v4 = v8;
    if ( !v8 )
    {
      v5 = -1073741823;
      goto LABEL_9;
    }
    v10 = sub_1C00A88F4(
            (int)DeviceExtension,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v8,
            DeviceObject,
            (__int64)&DeviceName,
            v16);
    DeviceName.Buffer = 0LL;
    v5 = v10;
    if ( v10 < 0 )
    {
LABEL_9:
      if ( DeviceExtension )
      {
        if ( v4 )
          IoDetachDevice(v4);
        sub_1C003B11C((__int64)DeviceExtension);
        if ( SourceDevice )
          IoDeleteDevice(SourceDevice);
      }
      goto LABEL_14;
    }
    KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
    v11 = (KSPIN_LOCK **)(DriverObjectExtension + 7);
    v12 = DriverObjectExtension[7];
    v13 = DeviceExtension + 8;
    if ( *(KSPIN_LOCK **)(v12 + 8) != DriverObjectExtension + 7 )
      __fastfail(3u);
    *v13 = v12;
    DeviceExtension[9] = v11;
    *(_QWORD *)(v12 + 8) = v13;
    *v11 = v13;
    ++*((_DWORD *)DriverObjectExtension + 18);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    sub_1C003609C((__int64)DeviceExtension);
    SourceDevice->Flags |= 0x10u;
    SourceDevice->Flags &= ~0x80u;
  }
LABEL_14:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0x53446152u);
  return (unsigned int)v5;
}
