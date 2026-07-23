/*
 * XREFs of sub_1406B5660 @ 0x1406B5660
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1406B5660(void *a1, void *a2)
{
  KPROCESSOR_MODE v3; // bl
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v7; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  result = ObReferenceObjectByHandle(a1, 0, 0LL, v3, &Object, 0LL);
  if ( result >= 0 )
  {
    v7 = 0LL;
    v5 = ObReferenceObjectByHandle(a2, 0, 0LL, v3, &v7, 0LL);
    if ( v5 >= 0 )
    {
      v5 = v7 != Object ? 0xC00001AC : 0;
      ObfDereferenceObject(v7);
    }
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
