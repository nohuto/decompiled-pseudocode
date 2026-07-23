/*
 * XREFs of IoSynchronousPageWrite @ 0x140248520
 * Callers:
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 * Callees:
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return sub_140340130(
           (_DWORD)FileObject,
           (_DWORD)MemoryDescriptorList,
           (_DWORD)StartingOffset,
           (_DWORD)Event,
           0,
           0LL,
           (__int64)IoStatusBlock);
}
