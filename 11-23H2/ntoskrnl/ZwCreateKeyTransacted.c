/*
 * XREFs of ZwCreateKeyTransacted @ 0x14041C770
 * Callers:
 *     DifZwCreateKeyTransactedWrapper @ 0x1405EEE60 (DifZwCreateKeyTransactedWrapper.c)
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
