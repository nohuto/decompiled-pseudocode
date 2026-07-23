/*
 * XREFs of ZwRenameKey @ 0x14041D680
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1405F60B0 (DifZwRenameKeyWrapper.c)
 *     CmpDoReDoRenameKey @ 0x140A2AA74 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
