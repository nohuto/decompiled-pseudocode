/*
 * XREFs of sub_14093D4CC @ 0x14093D4CC
 * Callers:
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 *     sub_14093E294 @ 0x14093E294 (sub_14093E294.c)
 * Callees:
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     sub_14055E560 @ 0x14055E560 (sub_14055E560.c)
 */

__int64 __fastcall sub_14093D4CC(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  __int64 v7; // rdi
  bool v10; // zf
  __int64 result; // rax
  NTSTATUS Status; // ecx
  unsigned __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  v7 = Length;
  v10 = *(_BYTE *)(a5 + 976) == 0;
  IoStatusBlock = 0LL;
  if ( v10 || a6 || (result = sub_14055E560((__int64)Buffer, Length, (__int64)Buffer, Length, &v13), (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v7, ByteOffset, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        ByteOffset->QuadPart += v7;
    }
    return (unsigned int)Status;
  }
  return result;
}
