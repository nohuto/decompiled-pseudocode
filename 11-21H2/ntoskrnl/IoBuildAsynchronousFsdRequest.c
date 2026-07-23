/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x14029BA90
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x1406E4AF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406E4C10 (FsRtlMdlReadEx.c)
 *     sub_1409303C0 @ 0x1409303C0 (sub_1409303C0.c)
 *     sub_140930460 @ 0x140930460 (sub_140930460.c)
 * Callees:
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)sub_14029BAD0(MajorFunction, DeviceObject, Buffer, Length, StartingOffset, IoStatusBlock, retaddr);
}
