/*
 * XREFs of ZwCancelIoFile @ 0x14041BC90
 * Callers:
 *     DifZwCancelIoFileWrapper @ 0x1405EE050 (DifZwCancelIoFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
