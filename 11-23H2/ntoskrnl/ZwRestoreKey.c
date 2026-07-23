/*
 * XREFs of ZwRestoreKey @ 0x14041E1D0
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1405F6A30 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
