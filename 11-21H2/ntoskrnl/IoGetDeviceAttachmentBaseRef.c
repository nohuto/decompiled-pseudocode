/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x14036B850
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     sub_140560680 @ 0x140560680 (sub_140560680.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1406C1980 (IoWMIDeviceObjectToInstanceName.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_140947D0C @ 0x140947D0C (sub_140947D0C.c)
 *     sub_14095E7EC @ 0x14095E7EC (sub_14095E7EC.c)
 *     sub_14098B980 @ 0x14098B980 (sub_14098B980.c)
 * Callees:
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)sub_14036B86C(DeviceObject, 1953261124LL);
}
