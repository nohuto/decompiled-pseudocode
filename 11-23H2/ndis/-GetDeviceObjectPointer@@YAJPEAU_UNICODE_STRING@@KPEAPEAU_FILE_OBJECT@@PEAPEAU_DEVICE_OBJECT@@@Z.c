/*
 * XREFs of ?GetDeviceObjectPointer@@YAJPEAU_UNICODE_STRING@@KPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00D030C
 * Callers:
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1C0141E7C (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  return IoGetDeviceObjectPointer(a1, 1u, a3, a4);
}
