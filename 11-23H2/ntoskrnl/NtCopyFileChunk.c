/*
 * XREFs of NtCopyFileChunk @ 0x140749890
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x14022BA20 (IoIs32bitProcess.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F164 (IopFreeCopyObjectsFromDataBuffer.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1402F4E44 (IopPopulateCopyWriteWorkerData.c)
 *     IopReferenceFileObject @ 0x1403016DC (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x140301740 (IopFileObjectRevoked.c)
 *     IopWaitForSynchronousIoEvent @ 0x14040FDE0 (IopWaitForSynchronousIoEvent.c)
 *     ZwCreateEvent @ 0x14041B660 (ZwCreateEvent.c)
 *     memset @ 0x140435A00 (memset.c)
 *     IopExceptionFilter @ 0x1405554E8 (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x140749DE4 (ObReferenceFileObjectForWrite.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtCopyFileChunk(
        void *a1,
        ULONG_PTR a2,
        void *a3,
        int *a4,
        ULONG Length,
        __int64 a6,
        struct _KTHREAD **a7,
        __int64 a8,
        unsigned __int64 a9,
        int a10)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  __int64 v16; // rdi
  char *Pool2; // rax
  __int64 v18; // r8
  char *v19; // rsi
  int File; // edi
  char *v21; // r13
  unsigned __int64 v22; // rcx
  void *v23; // rdx
  int v24; // r13d
  PIRP *v25; // r13
  PVOID *v26; // rdi
  int InitialState; // [rsp+20h] [rbp-148h]
  int HandleInformation; // [rsp+28h] [rbp-140h]
  int v29; // [rsp+70h] [rbp-F8h]
  char v30; // [rsp+88h] [rbp-E0h]
  HANDLE EventHandle; // [rsp+90h] [rbp-D8h] BYREF
  PIRP *v32; // [rsp+98h] [rbp-D0h]
  __int64 v33; // [rsp+A0h] [rbp-C8h]
  __int64 v34; // [rsp+A8h] [rbp-C0h]
  PVOID Object; // [rsp+B0h] [rbp-B8h] BYREF
  PVOID v36; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-A8h]
  _DWORD *v38; // [rsp+C8h] [rbp-A0h]
  PIRP v39; // [rsp+D0h] [rbp-98h]
  __int128 v40; // [rsp+D8h] [rbp-90h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-80h] BYREF
  int v45; // [rsp+1B8h] [rbp+50h]

  v40 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  EventHandle = (HANDLE)-1LL;
  v11 = 0LL;
  v39 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a10 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    v33 = *(_QWORD *)a6;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a4;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)a4;
    v40 = *(_OWORD *)a4;
    v16 = v33;
  }
  else
  {
    v16 = *(_QWORD *)a6;
    v33 = *(_QWORD *)a6;
    v15 = *(_OWORD *)a4;
    v40 = *(_OWORD *)a4;
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
    File = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)v21 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_42;
    File = ObReferenceFileObjectForWrite(a2);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v21 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_42;
    v22 = *((_QWORD *)v21 + 6);
    v45 = *(_DWORD *)(v22 + 80) & 2;
    v30 = (*(_DWORD *)(v22 + 80) & 4) != 0;
    v32 = (PIRP *)(v21 + 32);
    v23 = 0LL;
    if ( !v45 )
      v23 = a3;
    File = IopPopulateCopyWriteWorkerData(
             v22,
             (__int64)a4,
             (__int64)v19,
             Length,
             InitialState,
             HandleInformation,
             v37,
             v23,
             a7,
             a9,
             SBYTE4(v34),
             (__int64)(v21 + 32));
    if ( File >= 0 )
    {
      v24 = v45;
      if ( v45 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        File = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( File < 0 )
          goto LABEL_42;
        Object = 0LL;
        File = ObReferenceObjectByHandle(EventHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v38 = Object;
        if ( File < 0 )
          goto LABEL_42;
        v25 = v32;
        (*v32)->UserEvent = (PKEVENT)Object;
        if ( a3 )
        {
          v36 = 0LL;
          File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v36, 0LL);
          v11 = (struct _KEVENT *)v36;
          if ( File < 0 )
            goto LABEL_42;
          KeResetEvent((PRKEVENT)v36);
        }
        v39 = *v25;
        v24 = v45;
      }
      *(_OWORD *)a4 = v15;
      v26 = (PVOID *)v37;
      ObfReferenceObject(*(PVOID *)v37);
      File = IopReadFile(*v26, a3, (__int64)a4, v19, Length, a6, a8, 0LL, 0LL, 0x40000000, 0LL, (__int64)v26);
      v19 = 0LL;
      if ( File >= 0 && v24 )
      {
        File = IopWaitForSynchronousIoEvent(v39, PreviousMode, v30, v38);
        if ( File >= 0 )
        {
          if ( PreviousMode )
          {
            if ( IoIs32bitProcess(0LL) )
              v29 = *(_DWORD *)(unsigned int)*a4;
            else
              v29 = *a4;
            File = v29;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            File = *(_DWORD *)(unsigned int)*a4;
          }
          else
          {
            File = *a4;
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
  if ( EventHandle != (HANDLE)-1LL )
    ObCloseHandle(EventHandle, 0);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)File;
}
