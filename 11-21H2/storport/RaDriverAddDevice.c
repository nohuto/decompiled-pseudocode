/*
 * XREFs of RaDriverAddDevice @ 0x1C003D390
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterHack @ 0x1C0034D20 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C0039384 (RaidCreateAdapter.c)
 *     RaidDeleteAdapter @ 0x1C003956C (RaidDeleteAdapter.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     RaidCreateDeviceName @ 0x1C004E5BC (RaidCreateDeviceName.c)
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 */

__int64 __fastcall RaDriverAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *v4; // rsi
  int Adapter; // edi
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
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_9cef3b4c60973fc161441df373a78906_Traceguids,
      DriverObject,
      DeviceObject);
  }
  SourceDevice = 0LL;
  v4 = 0LL;
  DeviceName = 0LL;
  RaidCreateDeviceName(DeviceObject, &DeviceName, &v16);
  Adapter = IoCreateDevice(DriverObject, 48 * (RaidLogListSize + 124), &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( Adapter >= 0 )
  {
    DeviceExtension = SourceDevice->DeviceExtension;
    Adapter = RaidCreateAdapter((__int64)DeviceExtension);
    if ( Adapter < 0 )
      goto LABEL_9;
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(DriverObject, DriverEntry);
    v8 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
    v4 = v8;
    if ( !v8 )
    {
      Adapter = -1073741823;
      goto LABEL_9;
    }
    v10 = RaidInitializeAdapter(
            (int)DeviceExtension,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v8,
            DeviceObject,
            (__int64)&DeviceName,
            v16);
    DeviceName.Buffer = 0LL;
    Adapter = v10;
    if ( v10 < 0 )
    {
LABEL_9:
      if ( DeviceExtension )
      {
        if ( v4 )
          IoDetachDevice(v4);
        RaidDeleteAdapter((__int64)DeviceExtension);
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
    RaidAdapterHack((__int64)DeviceExtension);
    SourceDevice->Flags |= 0x10u;
    SourceDevice->Flags &= ~0x80u;
  }
LABEL_14:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0x53446152u);
  return (unsigned int)Adapter;
}
