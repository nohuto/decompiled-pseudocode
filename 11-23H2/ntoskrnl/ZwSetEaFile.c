/*
 * XREFs of ZwSetEaFile @ 0x14041E4B0
 * Callers:
 *     DifZwSetEaFileWrapper @ 0x1405F6FE0 (DifZwSetEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
