/*
 * XREFs of sub_1406A7150 @ 0x1406A7150
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140A081A8 @ 0x140A081A8 (sub_140A081A8.c)
 */

__int64 __fastcall sub_1406A7150(HANDLE Handle)
{
  KPROCESSOR_MODE v2; // bp
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  unsigned int v5; // edi
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  v3 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v2, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741788 )
    {
      if ( qword_140C10D28 )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(Handle, 2u, qword_140C10D28, v2, &Object, 0LL);
        v4 = Object;
        v5 = v7;
        if ( v7 >= 0 )
          v5 = sub_140A081A8(Object, 0LL);
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
