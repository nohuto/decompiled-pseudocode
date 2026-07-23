/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x14041CC00
 * Callers:
 *     DifZwOpenKeyTransactedExWrapper @ 0x1405F1D10 (DifZwOpenKeyTransactedExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
