/*
 * XREFs of NtAlertResumeThread @ 0x1409B5E90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x14056ED70 (KeAlertResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  char PreviousMode; // bl
  __int64 v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousSuspendCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)PreviousSuspendCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return -1073741790;
    }
    else
    {
      v7 = KeAlertResumeThread((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( PreviousSuspendCount )
        *PreviousSuspendCount = v7;
      return 0;
    }
  }
  return result;
}
