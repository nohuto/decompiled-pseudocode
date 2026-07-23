/*
 * XREFs of sub_140A218B8 @ 0x140A218B8
 * Callers:
 *     sub_140240534 @ 0x140240534 (sub_140240534.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140A22790 @ 0x140A22790 (sub_140A22790.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BB6BC @ 0x1406BB6BC (sub_1406BB6BC.c)
 */

__int64 __fastcall sub_140A218B8(
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
  v7 = sub_1406BB6BC(a1, &FileHandle);
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
