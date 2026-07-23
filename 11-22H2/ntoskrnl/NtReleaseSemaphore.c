/*
 * XREFs of NtReleaseSemaphore @ 0x140790EA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v7; // rcx
  NTSTATUS v9; // esi
  LONG v10; // r8d
  PVOID v11; // rbx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousCount < 0x7FFFFFFF0000LL )
      v7 = (__int64)PreviousCount;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  if ( ReleaseCount <= 0 )
    return -1073741811;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(SemaphoreHandle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = ReleaseCount;
    v11 = Object;
    v9 = KeReleaseSemaphoreEx((__int64)Object, 1u, v10);
    LODWORD(Object) = v9;
    ObfDereferenceObject(v11);
    if ( v9 >= 0 )
    {
      if ( PreviousCount )
        *PreviousCount = 0;
    }
  }
  return v9;
}
