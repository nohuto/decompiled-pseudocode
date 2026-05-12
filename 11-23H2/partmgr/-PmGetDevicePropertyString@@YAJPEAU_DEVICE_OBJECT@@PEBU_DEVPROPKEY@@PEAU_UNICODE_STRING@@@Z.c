/*
 * XREFs of ?PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z @ 0x1C001F240
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDevicePropertyData @ 0x1C001F2BC (PmGetDevicePropertyData.c)
 */

__int64 __fastcall PmGetDevicePropertyString(
        struct _DEVICE_OBJECT *a1,
        struct _DEVPROPKEY *a2,
        struct _UNICODE_STRING *a3)
{
  int DevicePropertyData; // ebx

  DevicePropertyData = PmGetDevicePropertyData(a1, a2);
  if ( DevicePropertyData >= 0 )
    RtlInitUnicodeString(a3, 0LL);
  return (unsigned int)DevicePropertyData;
}
