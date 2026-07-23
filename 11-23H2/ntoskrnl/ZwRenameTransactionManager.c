/*
 * XREFs of ZwRenameTransactionManager @ 0x14041E0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LogFileName);
}
