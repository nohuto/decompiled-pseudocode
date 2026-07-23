/*
 * XREFs of ZwCancelIoFile @ 0x14041C300
 * Callers:
 *     sub_14061DB10 @ 0x14061DB10 (sub_14061DB10.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, IoStatusBlock);
}
