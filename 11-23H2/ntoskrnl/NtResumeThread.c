/*
 * XREFs of NtResumeThread @ 0x1407C0620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x140309D88 (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResumeThread(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  char PreviousMode; // r9
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    PsMultiResumeThread((__int64)Object, &v7, 1u);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( a2 )
      *a2 = v7;
    return 0LL;
  }
  return result;
}
