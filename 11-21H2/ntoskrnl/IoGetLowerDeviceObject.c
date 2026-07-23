/*
 * XREFs of IoGetLowerDeviceObject @ 0x14036CCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036CCBC @ 0x14036CCBC (sub_14036CCBC.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)sub_14036CCBC(DeviceObject, 1953261124LL);
}
