/*
 * XREFs of NtClearEvent @ 0x1407B3940
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     ExpResetCrossVmEvent @ 0x140A05FB8 (ExpResetCrossVmEvent.c)
 */

__int64 __fastcall NtClearEvent(HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  unsigned int v5; // edi
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(Handle, 2u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v4 = Object;
        v5 = v7;
        if ( v7 >= 0 )
          v5 = ExpResetCrossVmEvent(Object, 0LL);
      }
    }
  }
  else
  {
    KeResetEvent((PRKEVENT)Object);
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return v5;
}
