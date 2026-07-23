/*
 * XREFs of PopFlushVolumeWorker @ 0x140AA6120
 * Callers:
 *     PopFlushVolumes @ 0x140AA6358 (PopFlushVolumes.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x14041BA50 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x14041BB90 (ZwCreateFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopFlushAndHold @ 0x1405907A8 (PopFlushAndHold.c)
 *     NtDeviceIoControlFile @ 0x1406E54A0 (NtDeviceIoControlFile.c)
 *     ObQueryNameString @ 0x14075B560 (ObQueryNameString.c)
 */

void __fastcall PopFlushVolumeWorker(struct _KEVENT *StartContext)
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
  ExAcquireFastMutex(&PopVolumeLock);
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
          v5 = (_QWORD *)qword_140C3D7A8,
          *(__int64 **)qword_140C3D7A8 != &PopVolumeDevices) )
    {
      __fastfail(3u);
    }
    *v2 = &PopVolumeDevices;
    v2[1] = v5;
    *v5 = v2;
    qword_140C3D7A8 = (__int64)v2;
    ExReleaseFastMutex(&PopVolumeLock);
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
            PopFlushAndHold(FileHandle, &IoStatusBlock);
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
    ExAcquireFastMutex(&PopVolumeLock);
  }
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  ExReleaseFastMutex(&PopVolumeLock);
}
