/*
 * XREFs of ZwCreateKeyTransacted @ 0x14041BD20
 * Callers:
 *     DifZwCreateKeyTransactedWrapper @ 0x1405EE980 (DifZwCreateKeyTransactedWrapper.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(KeyHandle);
}
