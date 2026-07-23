/*
 * XREFs of IoDetachDevice @ 0x140256080
 * Callers:
 *     sub_14060E9B0 @ 0x14060E9B0 (sub_14060E9B0.c)
 *     sub_140A9E540 @ 0x140A9E540 (sub_140A9E540.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_140A807FC @ 0x140A807FC (sub_140A807FC.c)
 */

void __stdcall IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  KIRQL v2; // di
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (dword_140C29FC0 & 0x10) != 0 )
    sub_140A807FC(TargetDevice, retaddr);
  TargetDevice->AttachedDevice->DeviceObjectExtension->AttachedTo = 0LL;
  DeviceObjectExtension = TargetDevice->DeviceObjectExtension;
  TargetDevice->AttachedDevice = 0LL;
  if ( (DeviceObjectExtension->ExtensionFlags & 7) == 0 || TargetDevice->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  else
    sub_1402D5CA8((ULONG_PTR)TargetDevice);
}
