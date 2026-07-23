/*
 * XREFs of ZwRenameKey @ 0x14041E6E0
 * Callers:
 *     sub_1406262F0 @ 0x1406262F0 (sub_1406262F0.c)
 *     sub_140925CC0 @ 0x140925CC0 (sub_140925CC0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, NewName);
}
