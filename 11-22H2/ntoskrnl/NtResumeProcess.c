/*
 * XREFs of NtResumeProcess @ 0x1409B6030
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeProcess @ 0x14036A208 (PsMultiResumeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResumeProcess(HANDLE ProcessHandle)
{
  char PreviousMode; // r9
  NTSTATUS v2; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v2 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ProcessHandle,
         2048,
         (__int64)PsProcessType,
         PreviousMode,
         0x75537350u,
         &Object,
         0LL,
         0LL);
  if ( v2 >= 0 )
  {
    v2 = PsMultiResumeProcess((__int64)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v2;
}
