/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14041C080
 * Callers:
 *     sub_140625EA0 @ 0x140625EA0 (sub_140625EA0.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     sub_1406DEB64 @ 0x1406DEB64 (sub_1406DEB64.c)
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     sub_1408018EC @ 0x1408018EC (sub_1408018EC.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, IoStatusBlock);
}
