/*
 * XREFs of IoSynchronousPageWrite @ 0x14035C970
 * Callers:
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(FileObject, MemoryDescriptorList, StartingOffset, Event, 0, 0LL, IoStatusBlock);
}
