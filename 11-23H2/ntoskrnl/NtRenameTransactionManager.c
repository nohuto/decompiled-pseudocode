/*
 * XREFs of NtRenameTransactionManager @ 0x1403D89F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return __imp_NtRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
