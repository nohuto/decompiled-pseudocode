/*
 * XREFs of ?PmQueryWmiRegInfo@@YAJPEAU_DEVICE_OBJECT@@PEAKPEAU_UNICODE_STRING@@PEAPEAU2@2PEAPEAU1@@Z @ 0x1C0022E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmQueryWmiRegInfo(
        struct _DEVICE_OBJECT *a1,
        unsigned int *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING **a4,
        struct _UNICODE_STRING *a5,
        struct _DEVICE_OBJECT **a6)
{
  _QWORD *DeviceExtension; // rsi
  char *v9; // rbx

  DeviceExtension = a1->DeviceExtension;
  v9 = (char *)PmControlObject->DeviceExtension;
  RtlInitUnicodeString(a3, 0LL);
  *a2 = 33;
  *a4 = (struct _UNICODE_STRING *)(v9 + 408);
  *a6 = (struct _DEVICE_OBJECT *)DeviceExtension[3];
  return 0LL;
}
