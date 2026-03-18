/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01D941C
 * Callers:
 *     NtUserGetDeviceChangeInfo @ 0x1C01F3E60 (NtUserGetDeviceChangeInfo.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  IRP *v6; // rsi
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  __int128 v12; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  __int128 v14; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+37h]
  __int16 OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v2 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = 0;
  IoStatusBlock = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = qword_1C03364A0;
    v4 = *(_QWORD **)(qword_1C03364A0 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C03364A0 != &gMediaChangeList || *v4 != qword_1C03364A0 )
      __fastfail(3u);
    qword_1C03364A0 = *(_QWORD *)(qword_1C03364A0 + 8);
    *v4 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v3 )
    return 0LL;
  PushW32ThreadLock(v3, &v14, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, &v12, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x6DC010u,
           DeviceObject,
           (PVOID)(v3 + 36),
           (unsigned int)*(unsigned __int16 *)(v3 + 36) + 4,
           &OutputBuffer,
           2u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v6 )
    {
      UserSessionSwitchLeaveCrit(v5);
      Status = IofCallDriver(DeviceObject, v6);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(1LL, 0LL);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v2 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_DWORD *)(v3 + 32) & 1) != 0 )
          v2 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)&v12);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v14);
  return v2;
}
