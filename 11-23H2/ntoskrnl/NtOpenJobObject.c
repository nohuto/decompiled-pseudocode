/*
 * XREFs of NtOpenJobObject @ 0x1407EA2C0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x1409E5598 (EtwTraceJob.c)
 */

NTSTATUS __cdecl NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  void *v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)PsJobType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( v8 >= 0 )
    *JobHandle = v10;
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v8, 1826LL);
  return v8;
}
