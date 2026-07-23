/*
 * XREFs of sub_1409BA9F0 @ 0x1409BA9F0
 * Callers:
 *     sub_140998CC4 @ 0x140998CC4 (sub_140998CC4.c)
 * Callees:
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     sub_1406D6A3C @ 0x1406D6A3C (sub_1406D6A3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409BA9F0(HANDLE FileHandle, bool *a2)
{
  char v4; // r14
  int v5; // ebx
  PVOID Buffer; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v10 = 0;
  LODWORD(NumberOfBytes) = 0;
  ByteOffset.QuadPart = 0LL;
  v4 = 0;
  IoStatusBlock = 0LL;
  v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &NumberOfBytes, 4u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    v5 = sub_1406D6A3C(0xFu, &v14, &v10);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)NumberOfBytes < v14 + v10 || (unsigned int)NumberOfBytes > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Buffer = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x66647362u);
        if ( Buffer )
        {
          v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, NumberOfBytes, &ByteOffset, 0LL);
          if ( v5 >= 0 )
          {
            v7 = (unsigned int)NumberOfBytes;
            if ( IoStatusBlock.Information == (unsigned int)NumberOfBytes )
            {
              if ( (_DWORD)NumberOfBytes )
              {
                v8 = Buffer;
                do
                {
                  v4 += *v8++;
                  --v7;
                }
                while ( v7 );
              }
              *a2 = v4 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          ExFreePoolWithTag(Buffer, 0);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v5;
}
