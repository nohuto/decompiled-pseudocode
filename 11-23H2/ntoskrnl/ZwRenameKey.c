/*
 * XREFs of ZwRenameKey @ 0x14041E0D0
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1405F6590 (DifZwRenameKeyWrapper.c)
 *     CmpDoReDoRenameKey @ 0x140A2AC74 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
