/*
 * XREFs of IoDeleteDevice @ 0x1402D3820
 * Callers:
 *     sub_14060E7A0 @ 0x14060E7A0 (sub_14060E7A0.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     IoCreateDeviceSecure @ 0x1407435E0 (IoCreateDeviceSecure.c)
 *     sub_14074C2EC @ 0x14074C2EC (sub_14074C2EC.c)
 *     sub_14074D308 @ 0x14074D308 (sub_14074D308.c)
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 *     sub_14081E300 @ 0x14081E300 (sub_14081E300.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_14081F69C @ 0x14081F69C (sub_14081F69C.c)
 *     sub_140859598 @ 0x140859598 (sub_140859598.c)
 *     sub_140926260 @ 0x140926260 (sub_140926260.c)
 *     sub_140953508 @ 0x140953508 (sub_140953508.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_1409B4E80 @ 0x1409B4E80 (sub_1409B4E80.c)
 *     sub_140A834A0 @ 0x140A834A0 (sub_140A834A0.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 *     sub_140A9E540 @ 0x140A9E540 (sub_140A9E540.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B229D0 @ 0x140B229D0 (sub_140B229D0.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402D3980 @ 0x1402D3980 (sub_1402D3980.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1403DE184 @ 0x1403DE184 (sub_1403DE184.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     sub_14074D6AC @ 0x14074D6AC (sub_14074D6AC.c)
 *     sub_14074F418 @ 0x14074F418 (sub_14074F418.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A807E4 @ 0x140A807E4 (sub_140A807E4.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 538996553LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( ObQueryNameString(DeviceObject, Pool2, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  sub_14074F418(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (dword_140C29FC0 & 0x90) != 0 )
    sub_140A807E4(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    sub_1403DE184(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  sub_1402D3980(DeviceObject);
  sub_14074D6AC(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    sub_1402D5CA8((ULONG_PTR)DeviceObject);
}
