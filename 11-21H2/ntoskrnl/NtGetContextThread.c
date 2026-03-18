/*
 * XREFs of NtGetContextThread @ 0x1406E6600
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtGetContextThread(void *a1, int a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS ContextThreadInternal; // edi
  int v5; // r8d
  int v6; // r9d
  PVOID v7; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v7 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ContextThreadInternal = -1073741816;
    }
    else
    {
      LOBYTE(v6) = PreviousMode;
      LOBYTE(v5) = PreviousMode;
      ContextThreadInternal = PspGetContextThreadInternal((_DWORD)Object, a2, v5, v6, 1);
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)ContextThreadInternal;
}
