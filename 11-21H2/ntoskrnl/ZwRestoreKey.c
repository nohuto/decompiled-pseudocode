/*
 * XREFs of ZwRestoreKey @ 0x14041E7E0
 * Callers:
 *     sub_1406267D0 @ 0x1406267D0 (sub_1406267D0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, FileHandle);
}
