/*
 * XREFs of ZwRenameKey @ 0x14041DD40
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1405F6020 (DifZwRenameKeyWrapper.c)
 *     CmpDoReDoRenameKey @ 0x140A2A9C4 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName);
}
