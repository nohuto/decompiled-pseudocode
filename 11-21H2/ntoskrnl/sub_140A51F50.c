/*
 * XREFs of sub_140A51F50 @ 0x140A51F50
 * Callers:
 *     sub_140A51CA4 @ 0x140A51CA4 (sub_140A51CA4.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D6CD4 @ 0x1405D6CD4 (sub_1405D6CD4.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     NtDeviceIoControlFile @ 0x140730880 (NtDeviceIoControlFile.c)
 */

void __fastcall sub_140A51F50(struct _KEVENT *StartContext)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo[32]; // [rsp+B0h] [rbp-50h] BYREF

  ReturnLength = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(ObjectNameInfo, 0, sizeof(ObjectNameInfo));
  ExAcquireFastMutex(&stru_140C23160);
  while ( 1 )
  {
    v2 = *(_QWORD **)&StartContext->Header.Lock;
    if ( *(struct _KEVENT **)&StartContext->Header.Lock == StartContext )
      break;
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2
      || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2)
      || (*v4 = v3,
          *(_QWORD *)(v3 + 8) = v4,
          v5 = (_QWORD *)qword_140C231A8,
          *(__int64 **)qword_140C231A8 != &qword_140C231A0) )
    {
      __fastfail(3u);
    }
    *v2 = &qword_140C231A0;
    v2[1] = v5;
    *v5 = v2;
    qword_140C231A8 = (__int64)v2;
    KeReleaseGuardedMutex(&stru_140C23160);
    if ( ObQueryNameString((PVOID)*(v2 - 6), ObjectNameInfo, 0x200u, &ReturnLength) >= 0 )
    {
      if ( ObjectNameInfo[0].Name.Buffer )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)ObjectNameInfo;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(
               &FileHandle,
               0x100003u,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0xC0000000,
               3u,
               1u,
               0x20u,
               0LL,
               0) >= 0 )
        {
          if ( StartContext[2].Header.Type )
          {
            sub_1405D6CD4(FileHandle, &IoStatusBlock);
          }
          else if ( StartContext[2].Header.Signalling )
          {
            NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x53C004u, 0LL, 0, 0LL, 0);
          }
          else
          {
            ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
          }
          ZwClose(FileHandle);
        }
      }
    }
    ExAcquireFastMutex(&stru_140C23160);
  }
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  KeReleaseGuardedMutex(&stru_140C23160);
}
