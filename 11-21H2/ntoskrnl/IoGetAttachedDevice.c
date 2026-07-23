/*
 * XREFs of IoGetAttachedDevice @ 0x1402A78F0
 * Callers:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405572B0 (IoAdjustStackSizeForRedirection.c)
 *     sub_1406E8D8C @ 0x1406E8D8C (sub_1406E8D8C.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_1407F730C @ 0x1407F730C (sub_1407F730C.c)
 *     sub_14095A544 @ 0x14095A544 (sub_14095A544.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *i; // rax

  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  return DeviceObject;
}
