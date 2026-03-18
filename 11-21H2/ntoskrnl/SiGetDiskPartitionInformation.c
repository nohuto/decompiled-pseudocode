/*
 * XREFs of SiGetDiskPartitionInformation @ 0x1406BB628
 * Callers:
 *     SiValidateSystemPartition @ 0x140240534 (SiValidateSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     SiOpenDevice @ 0x1406BB6BC (SiOpenDevice.c)
 */

__int64 __fastcall SiGetDiskPartitionInformation(const WCHAR *a1, void *a2)
{
  NTSTATUS v3; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
    v3 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, a2, 0x90u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
