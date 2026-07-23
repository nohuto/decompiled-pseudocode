/*
 * XREFs of ZwCancelIoFile @ 0x14041B240
 * Callers:
 *     DifZwCancelIoFileWrapper @ 0x1405EDB70 (DifZwCancelIoFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
