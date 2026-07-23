/*
 * XREFs of sub_1409FEC6C @ 0x1409FEC6C
 * Callers:
 *     sub_1409FB95C @ 0x1409FB95C (sub_1409FB95C.c)
 *     sub_140A01A20 @ 0x140A01A20 (sub_140A01A20.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409FBD64 @ 0x1409FBD64 (sub_1409FBD64.c)
 *     sub_1409FBE5C @ 0x1409FBE5C (sub_1409FBE5C.c)
 *     sub_1409FC108 @ 0x1409FC108 (sub_1409FC108.c)
 *     sub_1409FEF6C @ 0x1409FEF6C (sub_1409FEF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1409FEC6C(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  int v5; // r15d
  const WCHAR *v8; // rbx
  char v9; // di
  char v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // rsi
  NTSTATUS result; // eax
  wchar_t *Buffer; // rbx
  int v16; // esi
  NTSTATUS v17; // ebx
  SIZE_T OutputBufferLength; // r14
  SIZE_T i; // rdx
  NTSTATUS v20; // r15d
  int *PoolWithTag; // rbx
  int *v22; // r8
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 OutputBuffer[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v29; // [rsp+190h] [rbp+90h] BYREF
  int v30; // [rsp+198h] [rbp+98h]

  v30 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  IoStatusBlock = 0LL;
  memset(OutputBuffer, 0, 0x8CuLL);
  v8 = (const WCHAR *)(a1 + 12);
  v29 = 0;
  v9 = 1;
  v10 = 1;
  RtlInitUnicodeString(&DestinationString, v8);
  v11 = (unsigned __int64)v8 + DestinationString.Length + 2;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v11 + 2 * v12) );
  v13 = (wchar_t *)(v11 & -(__int64)((_DWORD)v12 != 0));
  if ( v5 != 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v17 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
    if ( v17 >= 0 )
    {
      if ( LODWORD(OutputBuffer[0]) )
      {
        if ( LODWORD(OutputBuffer[0]) != 1 )
        {
          v17 = -1073741804;
          goto LABEL_24;
        }
      }
      else
      {
        LODWORD(OutputBufferLength) = 2352;
        for ( i = 2352LL; ; i = OutputBufferLength )
        {
          PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x72766E45u);
          if ( !PoolWithTag )
          {
            ZwClose(FileHandle);
            return -1073741670;
          }
          v20 = ZwDeviceIoControlFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  0x70050u,
                  0LL,
                  0,
                  PoolWithTag,
                  OutputBufferLength);
          if ( v20 >= 0 )
            break;
          ExFreePoolWithTag(PoolWithTag, 0);
          if ( v20 != -1073741789 )
          {
            v17 = v20;
            goto LABEL_24;
          }
          OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
        }
        v29 = PoolWithTag[2];
        ExFreePoolWithTag(PoolWithTag, 0);
        v5 = v30;
      }
      ZwClose(FileHandle);
      if ( LODWORD(OutputBuffer[0]) == 1 )
      {
        v22 = (int *)&OutputBuffer[6];
      }
      else
      {
        v22 = &v29;
        v9 = 0;
      }
      if ( v5 == 4 )
        return sub_1409FBE5C(a3, a4, v22, (int *)&OutputBuffer[3], &OutputBuffer[1], &OutputBuffer[2], v13, v9);
      else
        return sub_1409FC108(
                 (__int64)a3,
                 a4,
                 (unsigned int *)v22,
                 (unsigned int *)&OutputBuffer[3],
                 &OutputBuffer[1],
                 &OutputBuffer[2],
                 v13,
                 v9);
    }
LABEL_24:
    ZwClose(FileHandle);
    return v17;
  }
  result = sub_1409FEF6C(v8);
  if ( result >= 0 )
  {
    Buffer = (wchar_t *)*((_QWORD *)&v24 + 1);
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v10 = 0;
    Buffer = DestinationString.Buffer;
    LODWORD(v24) = *(_DWORD *)&DestinationString.Length;
    *((_QWORD *)&v24 + 1) = DestinationString.Buffer;
  }
  v16 = sub_1409FBD64(a3, a4, (__int64)&v24, v13);
  if ( v10 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return v16;
}
