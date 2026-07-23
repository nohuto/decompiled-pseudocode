/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14041E420
 * Callers:
 *     sub_140625AB0 @ 0x140625AB0 (sub_140625AB0.c)
 *     sub_1406BB4A0 @ 0x1406BB4A0 (sub_1406BB4A0.c)
 *     sub_140803050 @ 0x140803050 (sub_140803050.c)
 *     IoIsValidNameGraftingBuffer @ 0x1409375D0 (IoIsValidNameGraftingBuffer.c)
 *     sub_1409FEF6C @ 0x1409FEF6C (sub_1409FEF6C.c)
 *     sub_140A22520 @ 0x140A22520 (sub_140A22520.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(LinkHandle, LinkTarget);
}
