/*
 * XREFs of NtSetIoCompletion @ 0x14073E430
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x1402B91C0 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletion(void *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  NTSTATUS result; // eax
  int v9; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = IoSetIoCompletionEx2((__int64)Object, a2, a3, a4, a5, 1u, 0LL);
    ObfDereferenceObject(Object);
    return v9;
  }
  return result;
}
