/*
 * XREFs of ZwCreateKeyTransacted @ 0x14041CDC0
 * Callers:
 *     sub_14061E990 @ 0x14061E990 (sub_14061E990.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&DesiredAccess);
}
