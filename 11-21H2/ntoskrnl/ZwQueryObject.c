/*
 * XREFs of ZwQueryObject @ 0x14041B960
 * Callers:
 *     sub_140625690 @ 0x140625690 (sub_140625690.c)
 *     sub_14067DB18 @ 0x14067DB18 (sub_14067DB18.c)
 *     sub_1406E36C4 @ 0x1406E36C4 (sub_1406E36C4.c)
 *     sub_1408621F8 @ 0x1408621F8 (sub_1408621F8.c)
 *     sub_14091D570 @ 0x14091D570 (sub_14091D570.c)
 *     sub_1409EAA18 @ 0x1409EAA18 (sub_1409EAA18.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(Handle, *(_QWORD *)&ObjectInformationClass);
}
