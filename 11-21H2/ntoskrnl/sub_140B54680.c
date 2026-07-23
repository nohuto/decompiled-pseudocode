/*
 * XREFs of sub_140B54680 @ 0x140B54680
 * Callers:
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 */

__int64 __fastcall sub_140B54680(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  HANDLE v4; // rax
  int inited; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  __int128 OutputBuffer; // [rsp+A8h] [rbp-58h] BYREF
  int v13; // [rsp+B8h] [rbp-48h]
  WCHAR SourceString[56]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v13 = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  OutputBuffer = 0LL;
  DestinationString = 0LL;
  if ( a1 && a4 )
  {
    inited = sub_1402E1280(SourceString, 0x64uLL, L"\\Device\\Harddisk%d\\Partition%d", a2, a3);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
        if ( inited >= 0 )
        {
          inited = ZwDeviceIoControlFile(
                     FileHandle,
                     0LL,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x56001Cu,
                     0LL,
                     0,
                     &OutputBuffer,
                     0x14u);
          if ( inited >= 0 )
            *a4 = OutputBuffer;
        }
      }
    }
    v4 = FileHandle;
  }
  else
  {
    inited = -1073741811;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)inited;
}
