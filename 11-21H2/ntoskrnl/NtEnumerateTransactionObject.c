/*
 * XREFs of NtEnumerateTransactionObject @ 0x1403DFAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  return NtEnumerateTransactionObject_0(RootObjectHandle, QueryType, ObjectCursor, ObjectCursorLength, ReturnLength);
}
