/*
 * XREFs of ZwOpenKeyTransacted @ 0x14041D630
 * Callers:
 *     DifZwOpenKeyTransactedWrapper @ 0x1405F2350 (DifZwOpenKeyTransactedWrapper.c)
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
