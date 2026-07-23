/*
 * XREFs of sub_1402D30A0 @ 0x1402D30A0
 * Callers:
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_14074C5A8 @ 0x14074C5A8 (sub_14074C5A8.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_1407F1CDC @ 0x1407F1CDC (sub_1407F1CDC.c)
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     sub_1409585A4 @ 0x1409585A4 (sub_1409585A4.c)
 *     sub_14098C04C @ 0x14098C04C (sub_14098C04C.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 */

PDEVICE_OBJECT __fastcall sub_1402D30A0(PDEVICE_OBJECT DeviceObject, ULONG Tag)
{
  KIRQL v4; // di
  PDEVICE_OBJECT AttachedDevice; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  ObfReferenceObjectWithTag(AttachedDevice, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return AttachedDevice;
}
