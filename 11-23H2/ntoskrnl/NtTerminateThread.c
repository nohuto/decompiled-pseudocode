/*
 * XREFs of NtTerminateThread @ 0x14076D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x14076D980 (PspTerminateThreadByPointer.c)
 */

__int64 __fastcall NtTerminateThread(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    if ( a1 == -2LL )
      goto LABEL_3;
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               1,
               (__int64)PsThreadType,
               CurrentThread->PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    v3 = result;
    if ( (int)result >= 0 )
    {
      if ( Object != CurrentThread )
      {
        v3 = PspTerminateThreadByPointer(Object, a2, 0LL);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v3;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(CurrentThread, a2, a3);
      return v3;
    }
  }
  else
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[8]) != 1 )
      goto LABEL_3;
    return 3221225691LL;
  }
  return result;
}
