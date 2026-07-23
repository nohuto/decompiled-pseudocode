/*
 * XREFs of ZwOpenKeyTransacted @ 0x14041CBE0
 * Callers:
 *     DifZwOpenKeyTransactedWrapper @ 0x1405F1E70 (DifZwOpenKeyTransactedWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
