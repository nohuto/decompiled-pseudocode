/*
 * XREFs of NtGetContextThread @ 0x1407E1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x1407709C4 (PspGetContextThreadInternal.c)
 */

NTSTATUS __cdecl NtGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(
                            ThreadHandle,
                            8u,
                            (POBJECT_TYPE)PsThreadType,
                            PreviousMode,
                            &Object,
                            0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      ContextThreadInternal = -1073741816;
    else
      ContextThreadInternal = PspGetContextThreadInternal(
                                (struct _KTHREAD *)Object,
                                (__int64)ThreadContext,
                                PreviousMode,
                                PreviousMode,
                                1);
    ObfDereferenceObject(v5);
  }
  return ContextThreadInternal;
}
