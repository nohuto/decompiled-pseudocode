/*
 * XREFs of NtSetContextThread @ 0x1409B40C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     IoThreadToProcess @ 0x14028A210 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x1407707E0 (PspSetContextThreadInternal.c)
 */

NTSTATUS __cdecl NtSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // edi
  PEPROCESS v6; // rax
  PETHREAD v7; // rbx
  PETHREAD Thread; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  Thread = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v5 = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, (PVOID *)&Thread, 0LL);
  if ( v5 >= 0 )
  {
    v6 = IoThreadToProcess(CurrentThread);
    v7 = Thread;
    if ( (v6[1].DirectoryTableBase & 0x20000) != 0 && v6 == IoThreadToProcess(Thread) )
    {
      v5 = -1073740278;
    }
    else if ( (v7->MiscFlags & 0x400) != 0 || *(_QWORD *)&v7[1].WaitBlockFill11[112] )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = PspSetContextThreadInternal(v7, (__int64)ThreadContext, PreviousMode, PreviousMode, 1);
    }
    ObfDereferenceObject(v7);
  }
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&Thread;
  LODWORD(Thread) = v5;
  UserData.Size = 4;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &UserData);
  return v5;
}
