/*
 * XREFs of ZwSaveKey @ 0x14041E8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, FileHandle);
}
