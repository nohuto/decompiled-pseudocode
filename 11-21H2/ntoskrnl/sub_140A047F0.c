/*
 * XREFs of sub_140A047F0 @ 0x140A047F0
 * Callers:
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_140A04B04 @ 0x140A04B04 (sub_140A04B04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A047F0(void *Src, unsigned __int64 Length)
{
  void *Buffer; // rsi
  __int64 result; // rax
  int v6; // edi
  ULONG v7; // edi
  PVOID PoolWithTag; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-2B8h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-2B0h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-2A8h] BYREF
  void *v12; // [rsp+68h] [rbp-2A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-298h] BYREF
  unsigned __int64 v14; // [rsp+A0h] [rbp-268h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp-260h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-258h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-248h] BYREF
  WCHAR SourceString[264]; // [rsp+D0h] [rbp-238h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  EventHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  Buffer = 0LL;
  if ( !Src )
    return 3221225485LL;
  if ( (dword_140D04C2C & 8) != 0
    || (v12 = Src,
        v14 = Length,
        result = sub_1407F0478(
                   *((_QWORD *)KeGetCurrentThread() + 23),
                   (unsigned __int64 *)&v12,
                   &v14,
                   (__int64)&IoStatusBlock),
        (_DWORD)result == -1073741688) )
  {
    v6 = sub_1402E0198(SourceString, 260LL, L"%s\\rc%04u\\rescache.hit", L"\\SystemRoot\\Rescache", dword_140C0DA78);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        FileHandle = 0LL;
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( (v6 & 0xC0000000) != 0xC0000000 )
        {
          v11[0] = 0;
          v11[1] = 0;
          v6 = sub_140A04B04(FileHandle, v11);
          if ( (v6 & 0xC0000000) != 0xC0000000 )
          {
            v7 = v11[0];
            if ( Length < v11[0] )
              v7 = Length;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x636D6650u);
            Buffer = PoolWithTag;
            v12 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, v7);
              v6 = ZwWriteFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, Buffer, v7, &ByteOffset, 0LL);
              if ( v6 == 259 )
                v6 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
      }
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v6;
  }
  return result;
}
