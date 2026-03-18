/*
 * XREFs of NtGetContextThread @ 0x1407E1AF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall NtGetContextThread(void *a1, __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      ContextThreadInternal = -1073741816;
    else
      ContextThreadInternal = PspGetContextThreadInternal((struct _KTHREAD *)Object, a2, PreviousMode, PreviousMode, 1);
    ObfDereferenceObject(v5);
  }
  return (unsigned int)ContextThreadInternal;
}
