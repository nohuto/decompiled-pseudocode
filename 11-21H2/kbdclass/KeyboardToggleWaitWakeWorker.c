/*
 * XREFs of KeyboardToggleWaitWakeWorker @ 0x1C0006020
 * Callers:
 *     KeyboardToggleWaitWake @ 0x1C0005ED8 (KeyboardToggleWaitWake.c)
 * Callees:
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000F4A4 (KeyboardClassCreateWaitWakeIrp.c)
 */

void __fastcall KeyboardToggleWaitWakeWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rbx
  IRP *v3; // rdi
  char v4; // r15
  char v5; // r14
  bool v7; // bp
  KIRQL v8; // al
  char v9; // cl
  IRP *v10; // rcx
  struct _DEVICE_OBJECT *v11; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  BOOL Data; // [rsp+78h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+80h] [rbp+18h] BYREF

  v2 = *((_QWORD *)Context + 1);
  v3 = 0LL;
  v4 = *((_BYTE *)Context + 24);
  v5 = 0;
  v7 = v4 != 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 72));
  v9 = *(_BYTE *)(v2 + 362);
  if ( (v4 != 0) != v9 )
  {
    v5 = 1;
    if ( v9 )
    {
      v10 = *(IRP **)(v2 + 296);
      if ( v10 )
      {
        if ( !*(_BYTE *)(v2 + 304) )
        {
          *(_BYTE *)(v2 + 304) = 1;
          v3 = v10;
        }
      }
    }
    *(_BYTE *)(v2 + 362) = v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 72), v8);
  if ( v5 )
  {
    v11 = *(struct _DEVICE_OBJECT **)(v2 + 24);
    DeviceRegKey = 0LL;
    Data = v7;
    DestinationString = 0LL;
    if ( IoOpenDeviceRegistryKey(v11, 1u, 0x1F0000u, &DeviceRegKey) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"WaitWakeEnabled");
      ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
      ZwClose(DeviceRegKey);
    }
    if ( v4 )
      KeyboardClassCreateWaitWakeIrp((PVOID)v2);
  }
  if ( v3 )
    IoCancelIrp(v3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), KeyboardToggleWaitWakeWorker, 0x20u);
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 2));
  ExFreePoolWithTag(Context, 0);
}
