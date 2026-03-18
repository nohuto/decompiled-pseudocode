/*
 * XREFs of SiIssueSynchronousIoctl @ 0x140A5F6B8
 * Callers:
 *     SiValidateSystemPartition @ 0x14034F678 (SiValidateSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140A5FA40 (SiGetEfiSystemDevice.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A60594 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14041AE40 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     SiOpenDevice @ 0x1407C01D4 (SiOpenDevice.c)
 */

__int64 __fastcall SiIssueSynchronousIoctl(
        const WCHAR *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS v7; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v7 = SiOpenDevice(a1, &FileHandle);
  if ( v7 >= 0 )
    v7 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D1400u,
           a3,
           0xCu,
           OutputBuffer,
           OutputBufferLength);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
