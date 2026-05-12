/*
 * XREFs of PmInitializeAttributesTableCache @ 0x1C000E2A0
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDeviceParameterBinary @ 0x1C0026A1C (PmGetDeviceParameterBinary.c)
 */

__int64 __fastcall PmInitializeAttributesTableCache(struct _DEVICE_EXTENSION *a1)
{
  int DeviceParameterBinary; // edi

  DeviceParameterBinary = PmGetDeviceParameterBinary(a1);
  if ( DeviceParameterBinary >= 0 )
    return (unsigned int)-1073741820;
  return (unsigned int)DeviceParameterBinary;
}
