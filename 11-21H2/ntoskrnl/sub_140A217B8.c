/*
 * XREFs of sub_140A217B8 @ 0x140A217B8
 * Callers:
 *     sub_140A215D4 @ 0x140A215D4 (sub_140A215D4.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140A22650 @ 0x140A22650 (sub_140A22650.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BB6BC @ 0x1406BB6BC (sub_1406BB6BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A217B8(const WCHAR *a1, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  ULONG OutputBufferLength; // esi
  __int64 i; // rdx
  void *OutputBuffer; // rax
  void *v7; // rdi
  NTSTATUS v8; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = sub_1406BB6BC(a1, &FileHandle);
  if ( v3 >= 0 )
  {
    OutputBufferLength = 18480;
    for ( i = 18480LL; ; i = OutputBufferLength )
    {
      OutputBuffer = (void *)ExAllocatePool2(256LL, i, 1263556947LL);
      v7 = OutputBuffer;
      if ( !OutputBuffer )
      {
        v3 = -1073741670;
        goto LABEL_10;
      }
      v8 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      v3 = v8;
      if ( v8 != -1073741789 )
        break;
      ExFreePoolWithTag(v7, 0);
      OutputBufferLength += 9216;
    }
    if ( v8 < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *a2 = v7;
  }
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
