/*
 * XREFs of ZwEnumerateTransactionObject @ 0x14041CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(RootObjectHandle);
}
