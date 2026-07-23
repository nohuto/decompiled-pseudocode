/*
 * XREFs of NtSuspendProcess @ 0x1409B6200
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendProcess @ 0x1409B62A0 (PsSuspendProcess.c)
 */

NTSTATUS __cdecl NtSuspendProcess(HANDLE ProcessHandle)
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
    v2 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v2;
}
