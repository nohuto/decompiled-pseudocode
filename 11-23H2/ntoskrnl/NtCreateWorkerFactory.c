/*
 * XREFs of NtCreateWorkerFactory @ 0x140785D80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x140250A70 (KeRegisterObjectNotification.c)
 *     KeDisableQueueingPriorityIncrement @ 0x14031E4FC (KeDisableQueueingPriorityIncrement.c)
 *     ExpInitializeThreadHistory @ 0x14031E50C (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x14031E790 (KeInitializeTimer2.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x140728E00 (IopFreeMiniCompletionPacket.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407861D0 (IoAllocateMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rcx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  NTSTATUS v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  _QWORD *v21; // rdi
  SIZE_T v22; // rax
  SIZE_T v23; // rax
  PVOID v24; // rcx
  NTSTATUS result; // eax
  ULONG_PTR v26; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v29; // [rsp+60h] [rbp-58h] BYREF
  PVOID v30; // [rsp+68h] [rbp-50h] BYREF
  PVOID v31; // [rsp+70h] [rbp-48h] BYREF
  __int64 v32; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v33[3]; // [rsp+88h] [rbp-30h] BYREF

  Handle = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WorkerFactoryHandleReturn < 0x7FFFFFFF0000LL )
      v14 = (__int64)WorkerFactoryHandleReturn;
    *(_QWORD *)v14 = *(_QWORD *)v14;
  }
  Pool2 = ExAllocatePool2(65LL, 40LL, 1666674772LL);
  v16 = Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_WORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 34) = 0;
  v29 = 0LL;
  v17 = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &v29, 0LL);
  v18 = (volatile signed __int32 *)v29;
  *(_QWORD *)(v16 + 8) = v29;
  if ( v17 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)v16, 0);
    return v17;
  }
  KeDisableQueueingPriorityIncrement(v18);
  v17 = ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)WorkerProcessHandle,
          42,
          (__int64)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v30,
          0LL,
          0LL);
  if ( v17 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*(PVOID *)(v16 + 8));
    goto LABEL_26;
  }
  v19 = v30;
  if ( KeGetCurrentThread()->ApcState.Process != v30 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  v17 = ObOpenObjectByPointer(v30, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v17 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v19, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v16);
  *(_QWORD *)(v16 + 16) = MiniCompletionPacket;
  if ( !MiniCompletionPacket )
  {
    v17 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  v17 = ObCreateObjectEx(
          PreviousMode,
          ExpWorkerFactoryObjectType,
          (__int64)ObjectAttributes,
          PreviousMode,
          (__int64)Object,
          672,
          0,
          0,
          &v31,
          0LL);
  if ( v17 < 0 )
  {
    v26 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v26 + 56) = 0LL;
    IopFreeMiniCompletionPacket(v26);
    goto LABEL_23;
  }
  v21 = v31;
  *((_QWORD *)v31 + 2) = v16;
  v21[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v21 + 94) = 0;
  *((_DWORD *)v21 + 95) = MaxThreadCount;
  *((_DWORD *)v21 + 99) = 0;
  v21[48] = 0LL;
  v22 = 0x10000LL;
  if ( StackReserve )
    v22 = StackReserve;
  v21[7] = v22;
  memset(v21 + 15, 0, 0x100uLL);
  v21[51] = 0LL;
  v23 = 4096LL;
  if ( StackCommit )
    v23 = StackCommit;
  v21[8] = v23;
  v21[3] = StartRoutine;
  v21[4] = StartParameter;
  v21[50] = 0LL;
  *((_DWORD *)v21 + 104) = 0;
  v21[5] = Handle;
  v21[6] = v19;
  *((_DWORD *)v21 + 98) = 0;
  *((_DWORD *)v21 + 166) = 0;
  *((_DWORD *)v21 + 152) = 1;
  KeInitializeTimer2((__int64)(v21 + 53), 0LL, 0LL, 8LL);
  ExpInitializeThreadHistory((__int64)v21);
  v21[13] = 0LL;
  ObfReferenceObject(v24);
  KeRegisterObjectNotification((__int64)(v21 + 53), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v21 + 70));
  v33[0] = 0LL;
  v33[1] = -1LL;
  KeSetTimer2((__int64)(v21 + 53), v21[14], -v21[14], (__int64)v33);
  result = ObInsertObjectEx((char *)v21, 0LL, DesiredAccess, 0, 0, 0LL, &v32);
  if ( result >= 0 )
    *WorkerFactoryHandleReturn = (HANDLE)v32;
  return result;
}
