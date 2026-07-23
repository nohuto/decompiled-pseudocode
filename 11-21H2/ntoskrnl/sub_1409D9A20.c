/*
 * XREFs of sub_1409D9A20 @ 0x1409D9A20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1409B137C @ 0x1409B137C (sub_1409B137C.c)
 */

NTSTATUS __fastcall sub_1409D9A20(void *a1, int a2)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  if ( result >= 0 )
  {
    sub_1409B137C(Object, a2);
    ObfDereferenceObject(Object);
    return 0;
  }
  return result;
}
