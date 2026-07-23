/*
 * XREFs of ZwRestoreKey @ 0x14041D780
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1405F6550 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
