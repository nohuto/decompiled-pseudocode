/*
 * XREFs of NtCopyFileChunk @ 0x140749A80
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x14022BB30 (IoIs32bitProcess.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F3F4 (IopFreeCopyObjectsFromDataBuffer.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1402F50D4 (IopPopulateCopyWriteWorkerData.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x1403019D0 (IopFileObjectRevoked.c)
 *     IopWaitForSynchronousIoEvent @ 0x14040FFC0 (IopWaitForSynchronousIoEvent.c)
 *     ZwCreateEvent @ 0x14041B9F0 (ZwCreateEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopExceptionFilter @ 0x140555BA8 (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x140749FD4 (ObReferenceFileObjectForWrite.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  LONGLONG v16; // rdi
  char *Pool2; // rax
  __int64 v18; // r8
  char *v19; // rsi
  NTSTATUS File; // edi
  char *v21; // r13
  unsigned __int64 v22; // rcx
  HANDLE v23; // rdx
  ULONG v24; // r13d
  PIRP *v25; // r13
  PVOID *v26; // rdi
  int InitialState; // [rsp+20h] [rbp-148h]
  int HandleInformation; // [rsp+28h] [rbp-140h]
  NTSTATUS Status; // [rsp+70h] [rbp-F8h]
  char v30; // [rsp+88h] [rbp-E0h]
  HANDLE EventHandlea; // [rsp+90h] [rbp-D8h] BYREF
  PIRP *v32; // [rsp+98h] [rbp-D0h]
  LONGLONG QuadPart; // [rsp+A0h] [rbp-C8h]
  __int64 v34; // [rsp+A8h] [rbp-C0h]
  PVOID Object; // [rsp+B0h] [rbp-B8h] BYREF
  PVOID v36; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-A8h]
  _DWORD *v38; // [rsp+C8h] [rbp-A0h]
  PIRP v39; // [rsp+D0h] [rbp-98h]
  __int128 v40; // [rsp+D8h] [rbp-90h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-80h] BYREF
  ULONG Flagsa; // [rsp+1B8h] [rbp+50h]

  v40 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  EventHandlea = (HANDLE)-1LL;
  v11 = 0LL;
  v39 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Flags )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SourceOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    QuadPart = SourceOffset->QuadPart;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)&IoStatusBlock->Status;
    v40 = *(_OWORD *)&IoStatusBlock->Status;
    v16 = QuadPart;
  }
  else
  {
    v16 = SourceOffset->QuadPart;
    QuadPart = SourceOffset->QuadPart;
    v15 = *(_OWORD *)&IoStatusBlock->Status;
    v40 = *(_OWORD *)&IoStatusBlock->Status;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, Length + 72LL, 1883467593LL);
  v19 = Pool2;
  if ( Pool2 )
  {
    v21 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v19 += 72;
    *((_QWORD *)v21 + 8) = v16;
    v37 = (__int64)(v21 + 56);
    File = IopReferenceFileObject(SourceHandle, 1u, PreviousMode, (PVOID *)v21 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_42;
    File = ObReferenceFileObjectForWrite((ULONG_PTR)DestinationHandle);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v21 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_42;
    v22 = *((_QWORD *)v21 + 6);
    Flagsa = *(_DWORD *)(v22 + 80) & 2;
    v30 = (*(_DWORD *)(v22 + 80) & 4) != 0;
    v32 = (PIRP *)(v21 + 32);
    v23 = 0LL;
    if ( !Flagsa )
      v23 = EventHandle;
    File = IopPopulateCopyWriteWorkerData(
             v22,
             (__int64)IoStatusBlock,
             (__int64)v19,
             Length,
             InitialState,
             HandleInformation,
             v37,
             v23,
             (struct _KTHREAD **)DestOffset,
             (unsigned __int64)DestKey,
             SBYTE4(v34),
             (__int64)(v21 + 32));
    if ( File >= 0 )
    {
      v24 = Flagsa;
      if ( Flagsa )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        File = ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( File < 0 )
          goto LABEL_42;
        Object = 0LL;
        File = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v38 = Object;
        if ( File < 0 )
          goto LABEL_42;
        v25 = v32;
        (*v32)->UserEvent = (PKEVENT)Object;
        if ( EventHandle )
        {
          v36 = 0LL;
          File = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v36, 0LL);
          v11 = (struct _KEVENT *)v36;
          if ( File < 0 )
            goto LABEL_42;
          KeResetEvent((PRKEVENT)v36);
        }
        v39 = *v25;
        v24 = Flagsa;
      }
      *(_OWORD *)&IoStatusBlock->Status = v15;
      v26 = (PVOID *)v37;
      ObfReferenceObject(*(PVOID *)v37);
      File = IopReadFile(
               *v26,
               EventHandle,
               (__int64)IoStatusBlock,
               v19,
               Length,
               (__int64)SourceOffset,
               (__int64)SourceKey,
               0LL,
               0LL,
               0x40000000,
               0LL,
               (__int64)v26);
      v19 = 0LL;
      if ( File >= 0 && v24 )
      {
        File = IopWaitForSynchronousIoEvent(v39, PreviousMode, v30, v38);
        if ( File >= 0 )
        {
          if ( PreviousMode )
          {
            if ( IoIs32bitProcess(0LL) )
              Status = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
            else
              Status = IoStatusBlock->Status;
            File = Status;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            File = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
          }
          else
          {
            File = IoStatusBlock->Status;
          }
        }
        if ( v11 )
          KeSetEvent(v11, 0, 0);
      }
      else if ( File >= 0 )
      {
        File = 259;
      }
      goto LABEL_42;
    }
    *((_QWORD *)v21 + 6) = 0LL;
  }
  else
  {
    File = -1073741670;
  }
LABEL_42:
  if ( v19 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v19, 1, v18);
  if ( EventHandlea != (HANDLE)-1LL )
    ObCloseHandle(EventHandlea, 0);
  if ( v11 )
    ObfDereferenceObject(v11);
  return File;
}
