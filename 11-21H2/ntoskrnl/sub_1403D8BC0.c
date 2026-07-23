/*
 * XREFs of sub_1403D8BC0 @ 0x1403D8BC0
 * Callers:
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_1403D8BC0()
{
  NTSTATUS v0; // edx
  PVOID Buffer; // rax
  unsigned int v2; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+10h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  IoStatusBlock = 0LL;
  if ( qword_140C1BC38 )
  {
    return 0;
  }
  else
  {
    ByteOffset.QuadPart = 0LL;
    v0 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &NumberOfBytes, 4u, &ByteOffset, 0LL);
    if ( v0 >= 0 )
    {
      if ( (_DWORD)NumberOfBytes && (unsigned int)NumberOfBytes <= 0x800 )
      {
        Buffer = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x66647362u);
        qword_140C1BC38 = Buffer;
        if ( Buffer )
        {
          v0 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, NumberOfBytes, &ByteOffset, 0LL);
          if ( v0 >= 0 )
          {
            v2 = v0;
            if ( IoStatusBlock.Information != (unsigned int)NumberOfBytes )
              return (unsigned int)-1073741823;
            return v2;
          }
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  return (unsigned int)v0;
}
