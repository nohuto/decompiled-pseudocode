/*
 * XREFs of ZwSetEaFile @ 0x14041EAC0
 * Callers:
 *     sub_140626DD0 @ 0x140626DD0 (sub_140626DD0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, IoStatusBlock);
}
