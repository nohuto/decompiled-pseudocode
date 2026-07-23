/*
 * XREFs of ZwQueryLicenseValue @ 0x14041E2C0
 * Callers:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     RtlGetProductInfo @ 0x14025B190 (RtlGetProductInfo.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_140625530 @ 0x140625530 (sub_140625530.c)
 *     sub_140660F7C @ 0x140660F7C (sub_140660F7C.c)
 *     sub_14082D70C @ 0x14082D70C (sub_14082D70C.c)
 *     sub_140830FE0 @ 0x140830FE0 (sub_140830FE0.c)
 *     MmCreateMirror @ 0x14096BA60 (MmCreateMirror.c)
 *     sub_1409C599C @ 0x1409C599C (sub_1409C599C.c)
 *     sub_1409F9E40 @ 0x1409F9E40 (sub_1409F9E40.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B25110 @ 0x140B25110 (sub_140B25110.c)
 *     sub_140B2A640 @ 0x140B2A640 (sub_140B2A640.c)
 *     sub_140B30458 @ 0x140B30458 (sub_140B30458.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return sub_140433F80(ValueName, Type);
}
