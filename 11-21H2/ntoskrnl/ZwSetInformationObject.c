/*
 * XREFs of ZwSetInformationObject @ 0x14041C2E0
 * Callers:
 *     sub_140627550 @ 0x140627550 (sub_140627550.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(Handle, *(_QWORD *)&ObjectInformationClass);
}
