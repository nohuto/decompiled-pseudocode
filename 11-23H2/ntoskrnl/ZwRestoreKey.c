/*
 * XREFs of ZwRestoreKey @ 0x14041DE40
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1405F64C0 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
