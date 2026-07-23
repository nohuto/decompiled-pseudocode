/*
 * XREFs of CMFFlushHitsFile @ 0x140A0240C
 * Callers:
 *     NtMapCMFModule @ 0x140A034A0 (NtMapCMFModule.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14022AA1C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14041B170 (ZwWaitForSingleObject.c)
 *     ZwWriteFile @ 0x14041B1F0 (ZwWriteFile.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x14041B9F0 (ZwCreateEvent.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 *     CMFGetFileSizeEx @ 0x140A02720 (CMFGetFileSizeEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CMFFlushHitsFile(void *Src, unsigned __int64 Length)
{
  void *Buffer; // rsi
  __int64 result; // rax
  NTSTATUS v6; // edi
  ULONG v7; // edi
  void *Pool2; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-2B8h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-2B0h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-2A8h] BYREF
  void *v12; // [rsp+68h] [rbp-2A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-298h] BYREF
  unsigned __int64 v14; // [rsp+A0h] [rbp-268h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp-260h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-258h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-238h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  EventHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  Buffer = 0LL;
  if ( !Src )
    return 3221225485LL;
  if ( (CMFFlagsCache & 8) != 0
    || (v12 = Src,
        v14 = Length,
        result = MmFlushVirtualMemory(
                   KeGetCurrentThread()->ApcState.Process,
                   (unsigned __int64 *)&v12,
                   &v14,
                   &IoStatusBlock),
        (_DWORD)result == -1073741688) )
  {
    v6 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"%s\\rc%04u\\rescache.hit", L"\\SystemRoot\\Rescache", CMFCacheIndex);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
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
          v6 = CMFGetFileSizeEx(FileHandle, v11);
          if ( (v6 & 0xC0000000) != 0xC0000000 )
          {
            v7 = v11[0];
            if ( Length < v11[0] )
              v7 = Length;
            Pool2 = (void *)ExAllocatePool2(256LL, v7, 1668114000LL);
            Buffer = Pool2;
            v12 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, Src, v7);
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
