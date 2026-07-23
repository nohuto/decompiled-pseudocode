/*
 * XREFs of NtAssignProcessToJobObject @ 0x14069FE70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsAssignProcessToJobObject @ 0x14069FF70 (PsAssignProcessToJobObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTraceJobAssignProcess @ 0x1409E5498 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  int v4; // esi
  PVOID v5; // rdi
  PVOID v6; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v9; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0LL;
  v4 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v9, 0LL);
  if ( v4 >= 0
    && (ProcessHandle == (HANDLE)-7LL
     || (v4 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x624A7350u, (__int64)&Object, 0LL, 0LL),
         v4 >= 0)) )
  {
    v5 = Object;
    v6 = v9;
    v4 = PsAssignProcessToJobObject(v9, Object);
  }
  else
  {
    v5 = Object;
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v6, v5, (unsigned int)v4);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x624A7350u);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v4;
}
